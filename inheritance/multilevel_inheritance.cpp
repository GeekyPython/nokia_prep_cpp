#include<iostream>
using namespace std;

class A
{
    public:
        int num1;

        void display1()
        {
            cout<<"Num1: "<<num1<<endl;
        }

        void setNum1(int num)
        {
            num1 = num;
        }
};

class B : public A
{
    public:
        int num2;

        void setNum1(int num)
        {
            cout<<"Setting num1 from class B.\n";
            num1 = num;
        }

        void setNum2(int num)
        {
            num2 = num;
        }

        void displayNum2()
        {
            cout<<"Num2: "<<num2<<endl;
        }
};

class C : public B
{
    public:
        int num3;

        void setNum1AndNum2(int a, int b)
        {
            cout<<"Setting values for num1 and num2 from C\n";
            num1 = a;
            num2 = b;
        }

        void setNum3(int n)
        {
            num3 = n;
        }

        void displayNum3()
        {
            cout<<"Num3: "<<num3<<endl;
        }
};

int main()
{
    A a;
    B b;
    C c;

    a.setNum1(10);
    a.display1();

    cout<<"Setting values from class object B:\n";

    b.setNum2(25);
    b.setNum1(30);
    b.display1();
    b.displayNum2();

    cout<<"Seting values from class object C:\n";

    c.setNum1AndNum2(100, 200);
    c.setNum3(125);
    c.display1();
    c.displayNum2();
    c.displayNum3();

    return 0;

}

