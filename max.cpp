#include<bits/stdc++.h>

using namespace std;
int main()
{
    int x;
    cin >> x;
    int y[x];
    int mx;
    for (int i = 0; i < x;i++)
    {
        cin >> y[i];
    }
    mx = y[0];
    for (int i = 1; i < x;i++)
    {
        int temp = y[i];
        mx = max(mx, temp);
    }
    cout << mx;

    return 0;
}