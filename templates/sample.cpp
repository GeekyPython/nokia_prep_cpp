#include<iostream>
using namespace std;

class Number
{
    int n;

    public:
        Number()
        {
            n=0;
        }

        Number(int x)
        {
            n = x;
        }

        void display();
};

void Number::display()
{
    cout<<"Number is: "<<n<<endl;
}

int main()
{
    Number n1;
    n1 = 3;

    n1.display();

    return 0;
}