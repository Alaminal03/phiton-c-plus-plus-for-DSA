#include<bits/stdc++.h>
using namespace std;

int main()
{
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    string name;
    cin >> name;
    for(auto & x:name)
    {
        x = tolower(x);
        if(x=='e')
        {
            e++;
        }
        else if(x=='g')
        {
            g++;
        }
        else if(x=='y')
        {
            y++;
        }
        else if(x=='p')
        {
            p++;
        }
        else if(x=='t')
        {
            t++;
        }

    }
    cout << min({e, g, y, p, t});

    return 0;
}