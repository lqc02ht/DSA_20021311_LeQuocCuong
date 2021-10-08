#include <bits/stdc++.h>
using namespace std;

stack<int> sortStack(stack<int> st)
{
    stack<int> tmpStack;
    while (!st.empty()) {

        int tmp = st.top();
        st.pop();
        while (!tmpStack.empty() && tmpStack.top() < tmp) {

            st.push(tmpStack.top());
            tmpStack.pop();
        }
        tmpStack.push(tmp);
    }
    return tmpStack;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    stack<int> st;
    for(int i = 0; i < n; i++)
    {
        st.push(a[i]);
    }
    stack<int> tmpStack = sortStack(st);
    while (!tmpStack.empty()) {
        cout << tmpStack.top()<< ' ';
        tmpStack.pop();
    }
}
