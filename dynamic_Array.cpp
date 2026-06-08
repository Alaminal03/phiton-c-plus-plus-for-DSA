#include<bits/stdc++.h>

using namespace std;

int main()
{
    //statics array

    int *x = new int[5];        //dynamic array

    for (int i = 0; i < 5;i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < 5;i++)
    {
        cout << x[i] << endl;
    }

        return 0;
}