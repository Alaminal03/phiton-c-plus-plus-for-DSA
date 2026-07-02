#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char s;
        int id;
        int math;
        int eng;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math >> a[i].eng;
    }
     int mx = INT_MIN;
     int mxx[n];

     for (int i = 0; i < n;i++)
     {
         for (int j = i+1; j < n;j++)
         {
             int total_1 = a[i].math + a[i].eng;
             int total_2 = a[j].math + a[j].eng;

             if(total_2 > total_1)
             {
                 swap(a[j], a[i]);
             }
             else if(total_1 == total_2)
             {
                if(a[j].id < a[i].id)
                {
                    swap(a[i],a[j]);
                }
             }
         }
         
     }

     for (int i = 0; i < n;i++)
     {
        cout << a[i].name << " " << a[i].cls <<" " << a[i].s <<" " << a[i].id <<" " << a[i].math << " " << a[i].eng << " " << endl;
     }

         return 0;
}