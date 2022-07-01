#include<iostream>
using namespace std;

class Parent
{
    char * secret = "some secret";
    public:
        int number;

        Parent()
        {
            number = 0;
            cout<<"Parent constructor"<<endl;
        }

        void setNumber(int num)
        {
            number = num;
        }

        void showDis()
        {
            cout<<"Dis number: "<<number<<endl;
        }
};

class Child : public Parent
{
    public:
        Child()
        {
            cout<<"Child Constructor\n";
        }

        void display()
        {
            cout<<"Number: "<<number<<"\n";
        }
};

int main()
{
    Child ch;
    ch.setNumber(10);
    ch.display();
    ch.showDis();

    return 0;
}