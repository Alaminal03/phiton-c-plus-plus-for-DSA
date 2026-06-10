#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a[3];
    for (int i = 0; i < 3;i++)
    {
        cin >> a[i];
    }

    int mn = INT_MAX;
    int mx = INT_MIN;
    for (int i = 0; i < 3;i++)
    {
        int temp = a[i];
        mn = min(mn, temp);
        mx = max(mx, temp);
    }
    cout << mn << " " << mx;
    return 0;
}