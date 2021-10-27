#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> a;
    ifstream file;
    file.open("D:\\numbers.txt");
    int n;
    while(!file.eof()) {
        file >> n;
        a.push_back(n);
    }
    file.close();

    sort(a.begin(), a.end());
    /*for (auto i = a.begin(); i != a.end(); ++i)
        cout << *i << ' ';*/

    ofstream file1;
    file1.open("D:\\numbers.sorted.txt");
    for (auto i = a.begin(); i != a.end(); ++i){
        file1 << *i << ' ';
    }
    file1.close();
    return 0;
}
