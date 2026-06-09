#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    double gpa;
    int roll;
};

int main()
{
    Student a;
    char temp[100] = "Al Amin";
    strcpy(a.name, temp);
    a.gpa = 3.44;
    a.roll = 3;

    cout << a.name << " " << a.gpa <<" " << a.roll << endl;

    return 0;
}   