#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100000];
    cin.getline(a, 100000);
    int lena = strlen(a);
    // cin.ignore();
    char b[100000];
    cin.getline(b, 100000);
    int lenb = strlen(b);
    lenb = remove(b, b + lenb, ' ') - b;
    b[lenb] = '\0';

    sort(a, a+lena);

    for (int i = 0; i < lena;i++)
    {
        cout << a[i];
    }
    cout <<endl;
    sort(b,b+lenb);
    for (int i = 0; i < lenb;i++)
    {
        cout << b[i];
    }

}