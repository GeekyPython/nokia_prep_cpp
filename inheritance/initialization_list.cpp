#include<iostream>
using namespace std;

class Sample
{
    int number, num2;

    public:
        Sample()
        {
            number = num2 = 0;
        }

        Sample(int n, int m) : number(n), num2(m) {} //part after colon is called the initialization section

        void showNumbers() const
        {
            cout<<"Numbers:\n"<<number<<" "<<num2<<endl;
        }

};

int main()
{
    Sample s(2,3);
    s.showNumbers();

    return 0;
}
