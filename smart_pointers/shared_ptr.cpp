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
    shared_ptr<Sample> ptr(new Sample(10));
    ptr->display();

    shared_ptr<Sample> ptr1, ptr2;
    ptr1 = ptr;
    ptr2 = ptr;

    ptr1->display();
    ptr2->display();
    cout<<"Pointers Count: "<<ptr.use_count()<<endl;

    return 0;
};