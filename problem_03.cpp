#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    while(name.find("EGYPT") != string::npos)
    {
        int empty = name.find("EGYPT");
        name.replace(empty, 5, " ");
    }
    cout << name;
    return 0;
}