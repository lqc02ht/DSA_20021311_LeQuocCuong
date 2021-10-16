#include<iostream>

using namespace std;

int main()
{
    int i,a[5];
    for(i=0; i<5; i++) cin>>a[i];

    int Max=0, Min=a[0];

    for(i=0; i<5; i++){
        if(a[i] > Max) Max=a[i];
        if(a[i] < Min) Min=a[i];
    }

    cout<<Min+Max;
    return 0;
}
