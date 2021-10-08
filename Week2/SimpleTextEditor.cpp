#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    vector<string> st;
    string s, append;
    int n, input, ch;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> input;
        switch(input) {
            case(1):
                st.push_back(s);
                cin >> append;
                s.append(append);
                break;
            case(2):
                st.push_back(s);
                cin >> ch;
                s.erase(s.size() - ch, s.size());
                break;
            case(3):
                cin >> ch;
                cout << s[ch - 1] << endl;;
                break;
            case(4):
                 s = st.back();
                 st.pop_back();
                 break;
        }
    }
    return 0;
}
