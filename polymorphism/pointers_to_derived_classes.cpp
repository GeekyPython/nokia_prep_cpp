#include<iostream>
using namespace std;

class BC
{
    public:
        int b;
        void show()
        {
            cout<<"BC variable: "<<b<<endl;
        }
};

class DC : public BC
{
    public:
        int d;
        void show()
        {
            cout<<"Variable from base class: "<<b<<"\n"<<"DC variable: "<<d<<endl;
        }
};

int main()
{
    BC *bptr;
    BC base;
    bptr = &base;

    bptr->b = 100;
    bptr->show();

    DC derived;
    bptr = &derived;
    bptr->b = 50;
    bptr->show();

    cout<<"Now using a derived class dedicated pointer:\n";
    DC *dptr = &derived;
    dptr->d = 500;
    dptr->show();

    return 0;
}