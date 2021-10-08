#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include<stack>
#include<map>

using namespace std;

int main()
{
    map<char, char>ch;
    ch[')']='(';
    ch[']']='[';
    ch['}']='{';
    int cnt;
    cin >> cnt;
    while(cnt--)
    {
        string s;
        stack<char>st;
        cin >> s;
        int mark = 0;
        for(int i = 0; s[i] != '\0'; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else{
                if(!st.empty() and ch[s[i]]==st.top())
                 st.pop();
                else
                {
                    mark = 1;
                    break;
                }
            }
        }
        if(!mark and st.empty())
        {
            cout << "YES" << endl;
        } else {
            cout << "NO " << endl;
        }
    }
    return 0;
}
