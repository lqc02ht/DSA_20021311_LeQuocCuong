#include<iostream>

using namespace std;

int GCD(int a, int b){
    if(b == 0) return abs(a);
    return GCD(b, a%b);
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<GCD(m, n);
    return 0;
}
