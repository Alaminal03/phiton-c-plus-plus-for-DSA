#include<iostream>
using namespace std;
#include <iomanip>
int main()
{
    double d = 34.455656;

    cout << fixed << setprecision(3) << d;

    return 0;
}