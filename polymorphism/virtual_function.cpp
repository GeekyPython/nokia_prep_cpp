#include<iostream>
using namespace std;

class Base
{
    public:
        void display()
        {
            cout<<"Base class displayed\n";
        }

        virtual void show()
        {
            cout<<"Base class shown\n";
        }
};

class Derived : public Base
{
    public:
        void display()
        {
            cout<<"Derived class displayed";
        }

        void show()
        {
            cout<<"Derived class shown\n";
        }
};

int main()
{
    Base b;
    Derived d;
    Base *bptr;
    
    cout<<"Pointer pointing to Base Class\n";
    bptr = &b;
    bptr->display();
    bptr->show();

    cout<<"Pointer pointing to Derived Class\n";
    bptr = &d;
    bptr->display();
    bptr->show();

    return 0;
}