#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
        string country;
        int jersey;
        Cricketer(string country, int jersey)
        {
            this->country = country;
            this->jersey = jersey;
        }
};

int main()
{
    Cricketer* dhoni = new Cricketer("Dhoni", 100);
    Cricketer *kholi = new Cricketer("kholi", 18);
    *dhoni = *kholi;
    delete kholi;

    cout << dhoni->country << " " << dhoni->jersey << endl;

    return 0;
}