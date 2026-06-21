#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    string name;
    char sec;
    int num;
};

int main()
{
    int n;
    cin >> n;

    Student s[3];
    while(n--)
    {
        for (int i = 0; i < 3;i++)
        {
            cin >> s[i].id >> s[i].name >> s[i].sec >> s[i].num;
        }
        Student best = s[0];
        for (int i = 0; i < 3;i++)
        {
            if((s[i].num > best.num)||(s[i].num==best.num && s[i].id < best.id))
            {
                best = s[i];
            }
        }
         cout << best.id << " " << best.name << " " << best.sec << " " << best.num << "\n";
    }


    return 0;
}