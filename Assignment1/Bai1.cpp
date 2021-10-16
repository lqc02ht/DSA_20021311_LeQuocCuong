#include<iostream>

using namespace std;

int main()
{
    string sentences;
    getline(cin, sentences);
    for(int i=sentences.size()-1;i>=0;i--) cout<<sentences[i];
    return 0;
}
