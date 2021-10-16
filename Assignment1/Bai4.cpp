#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    //sort(a, a+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
    return 0;
}
