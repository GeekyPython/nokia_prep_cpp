#include<iostream>
#include<memory>
using namespace std;

class Sample
{
    int number;

    public:
        Sample(int a) : number(a){}

        ~Sample()
        {
            delete(&number);
        }

        void display()
        {
            cout<<"Number: "<<number<<endl;
        }
};

int main()
{
    unique_ptr<Sample> p1(new Sample(10));
    p1->display();

    unique_ptr<Sample> p2;
    p2 = move(p1);
    p2->display();

    return 0;
}