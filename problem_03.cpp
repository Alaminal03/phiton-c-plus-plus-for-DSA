#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:
        string nm;
        int cls;
        char sec;
        int id;
};


int main()
{
    int N;
    cin >> N;

    Student a[N];
    for (int i = 0; i < N;i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].sec >> a[i].id;
    }
    for (int i = 0; i < N/2;i++)
    {
        swap(a[i].sec, a[N - i - 1].sec);
    }
    for (int i = 0; i < N;i++)
    {
        cout << a[i].nm <<" " << a[i].cls <<" " << a[i].sec <<" " << a[i].id << endl;
    }

        return 0;
}