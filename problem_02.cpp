#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name ;
    string n = name;
    reverse(name.begin(), name.end());

    if(n==name)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}