#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int clas;
        int roll;
        double gpa;

  Student(int c,int r,double g)
  {
      clas = c;
      roll = r;
      gpa = g;
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