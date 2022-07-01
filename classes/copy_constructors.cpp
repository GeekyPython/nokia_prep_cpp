#include<iostream>
using namespace std;

class Sample
{
    int number;

    public:

        Sample()
        {
            number = 0;
        }

        Sample(Sample &a) //copy constructor
        {
            number = a.number;
        }

        void display()
        {
           cout<<"Number: "<<number<<endl;
        }

        void setNumber(int a)
        {
            number = a;
        }
};

int main()
{
    Sample a;
    a.setNumber(10);
    a.display();

    Sample b(a);
    cout<<"B: \n";
    b.display();

    return 0;

}

