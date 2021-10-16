#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin>>n;
    string s;
    cin.ignore();
    do {
        getline(cin, s);
        if(s[0]=='e') q.push((int)s[8]-48);
        else if(s[0]=='d') q.pop();
        n--;
    } while(n>0);
    while(!q.empty()) {
        cout<<q.front()<<' ';
        q.pop();
    }
    return 0;
}
