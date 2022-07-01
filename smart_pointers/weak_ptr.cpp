#include<iostream>
#include<memory>
using namespace std;

class Sample
{
    int number;

    public:
        Sample(int n) : number(n) {}
        ~Sample(){delete(&number);}

        void display()
        {
            cout<<"Number: "<<number<<endl;
        }
};

int main()
{
    shared_ptr<Sample>shPtr(new Sample(100));
    weak_ptr<Sample> ptr{shPtr};

    shared_ptr<Sample> p2;
    p2 = ptr.lock();

    if(p2)
    {
        p2->display();
    }

    else 
    {
        cout<<"Memory allocation failed\n";
    }

    return 0;
}