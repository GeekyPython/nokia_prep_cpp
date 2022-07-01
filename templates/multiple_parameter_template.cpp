#include<iostream>
using namespace std;

template<class T1=int, class T2=int> //multiple parameters with default datatypes for parameters
class Pair
{
    T1 a;
    T2 b;

    public:
        Pair(T1 u, T2 v)
        {
            a = u;
            b = v;
        }

        void show()
        {
            cout<<"A: "<<a<<"\nB: "<<b<<endl;
        }
};

int main()
{
    Pair<int, float>p1(1, 92.5);
    Pair<>p2(12,23); //parameters set to int, int by default
    p1.show();
    p2.show();

    return 0;
}