#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    cout << name << endl;

    stringstream ss(name);
    string word;
    int count = 0;
    while(ss>>word)
    {
        cout << word << endl;
        count++;
    }
    cout << count << endl;

    return 0;
}