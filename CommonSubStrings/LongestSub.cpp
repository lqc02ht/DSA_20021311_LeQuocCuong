#include<iostream>
#include<string>

using namespace std;

string LCS(string s1, string s2)
{
    int res = 0;
    int p;
    int len[2][s2.length()];
    int r = 0;
    for(int i = 0; i <= s1.length(); i++) {
        for(int j = 0; j <= s2.length(); j++) {
            if(i == 0 || j == 0) {
                len[r][j] = 0;
            }
            else if(s1[i - 1] == s2[j - 1]) {
                len[r][j] = len[1 - r][j - 1] + 1;
                if(len[r][j] > res) {
                    res = len[r][j];
                    p = i - 1;
                }
            }
            else {
                len[r][j] = 0;
            }
        }
        r = 1 - r;
    }
    if(res == 0) {
        return "Invalid!";
    }
    return s1.substr(p - res + 1, res);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << LCS(s1, s2);
    return 0;
}
