#include<iostream>
using namespace std;

class A
{
    int number;

    protected:
        int another_number;

    public:
        A()
        {
            number = 0;
            another_number = 0;
        }

        A(int num)
        {
            another_number = num;
        }
                                                                               
        void print()
        {
            cout<<"From parent class A: "<<another_number<<endl;
        }
};

class B : protected A
{
    public:
        void printout()
        {
            cout<<"From the derived B class: "<<another_number<<endl;
        }
};             

int main()
{
    A ob1(10);
    B ob2;

    ob1.print();
    ob2.printout();

    return 0;
}