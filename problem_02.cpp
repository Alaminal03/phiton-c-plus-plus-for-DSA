#include<bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    string n;
    getline(cin,n);

    stringstream nn(n);

    int count = 0;

    while(nn >> word)
    {
        if(word == "Jessica")
        {
            count++;
            break;
        }
    }
    if(count != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}