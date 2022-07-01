#include<iostream>
using namespace std;

class Sample
{
    int number;

    public:
        void setNumber(int n)
        {
            number = n;
        }

        void showNumber() const; //const member function
};

void Sample::showNumber() const
{
    cout<<"Number: "<<number<<endl;
}

int main()
{
    Sample s;
    s.setNumber(12);
    s.showNumber();
    return 0;
}