#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:
        string name;
        int roll;

 Student (string name, int roll)
 {
     this->name = name;
     this->roll = roll;
 }
 void hello ()
 {
     cout << "Hello from " << name << endl;
 }
};

int main()
{
    Student rakib("Rakib Ahamed", 22);
    rakib.hello();

    Student sakib("Sakib Ahamed", 33);
    sakib.hello();

    return 0;
}