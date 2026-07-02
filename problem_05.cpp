#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    long long id;
    int math;
    int eng;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s
            >> a[i].id >> a[i].math >> a[i].eng;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j].eng > a[i].eng)
            {
                swap(a[i], a[j]);
            }
            else if (a[j].eng == a[i].eng)
            {
                if (a[j].math > a[i].math)
                {
                    swap(a[i], a[j]);
                }
                else if (a[j].math == a[i].math)
                {
                    if (a[j].id < a[i].id)
                    {
                        swap(a[i], a[j]);
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " "
             << a[i].cls << " "
             << a[i].s << " "
             << a[i].id << " "
             << a[i].math << " "
             << a[i].eng << endl;
    }

    return 0;
}