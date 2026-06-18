#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c[100];
    for (int i = 0; i < b;i++)
    {
        cin >> c[i];
    }
    int mn = INT_MAX;
    for (int i = 0; i < b;i++)
    {
        for (int j = i + 1; j < b; j++)
        {
            int result = c[i] + c[j] + (j - i);
            mn = min(mn, result);
        }
    }
    cout << mn <<"\n";

        return 0;
}