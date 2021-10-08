#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q, a, b;
    cin >> q;
    stack<int> st1;
    stack<int> st2;
    for(int i = 0; i != q; i++)
    {
        cin >> a;
        if(a == 1)
        {
            cin >> b;
            st1.push(b);
        }
        else if(a == 2)
        {
            if(st2.empty()) {
                while(!st1.empty()) {
                    int value = st1.top();
                    st1.pop();
                    st2.push(value);
                }
            }
            st2.pop();
        }
        else if(a == 3) {
            if(st2.empty() == true)
            {
                while(!st1.empty()) {
                    int value = st1.top();
                    st1.pop();
                    st2.push(value);
                }
            }
            cout << st2.top() << '\n';
        }
    }
    return 0;
}
