#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    long long int c;
    char s,q;

    cin >> a >> s >> b >> q >> c;

    if((a+b==c)||(a-b==c)||(a*b==c))
    {
        cout << "Yes";
    }
    else if(s=='+')
    {
        cout << a + b;
    }
    else if(s=='-')
    {
        cout << a - b;
    }
    else
    {
        cout << a*b;
    }

    return 0;
}