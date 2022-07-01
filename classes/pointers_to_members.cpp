#include<iostream>
using namespace std;

class Sample
{
    int number;

    public:
        void setNumber(int);
        void showNumber() const;
};

void Sample::setNumber(int n)
{
    int Sample::* ip = &Sample::number;
    number = n;

}

void Sample::showNumber() const
{
    cout<<"Number : "<<number<<endl;
}

int main()
{
    Sample s;

}