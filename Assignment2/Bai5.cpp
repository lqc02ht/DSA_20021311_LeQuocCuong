#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> st;
    stack<int> temp;
    int n;
    cin>>n;
    string s;
    cin.ignore();
    do {
        getline(cin, s);
        if(s[1]=='u') st.push((int)s[5]-48);
        else if(s[1]=='o') st.pop();
        n--;
    } while(n>0);
    while(!st.empty()) {
        temp.push(st.top());
        st.pop();
    }
    while(!temp.empty()) {
        cout<<temp.top()<<' ';
        temp.pop();
    }
    return 0;
}
