#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n;i++)
    {
        string s, x;
        cin >> s >> x;
        while (s.find(x) != string::npos)
        {
            int res = s.find(x);
            s.replace(res, x.size(), "#");
        }
        cout << s << endl;
    }
        return 0;
}