#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin >> n;

    for (int i = 0; i < n;i++)
    {
        string number;
        int sum = 0;

        for (int i = 0; i < 3;i++)
        {
            sum += number[i];
        }
        int add = 0;
        for (int j = 3; j < 6;j++)
        {
            add += number[j];
        }
        if(sum==add)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
        return 0;
}