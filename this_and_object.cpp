#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int clas;
        int roll;
        double gpa;

        Student(int clas, int roll, double gpa)
        {
            this->clas = clas; //(*this).clas=clas
            this->roll = roll;
            this->gpa = gpa;
        }
};

int main()
{
    Student rahim(5, 30, 4.67);

    Student karim(7,20,4.67);

    cout << rahim.clas << " " << rahim.gpa << " " << rahim.roll << endl;
    cout << karim.clas << " " << karim.gpa << " " << karim.roll << endl;

    return 0;
}