#include<iostream>
using namespace std;

template<class T>
void swappo(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

void function(int x, int y, float p, float q)
{
    cout<<"BEFORE SWAP\n";
    cout<<"x: "<<x<<" y: "<<y<<" p: "<<p<<" q: "<<q<<endl;
    swappo(x,y);
    swappo(p,q);
    cout<<"AFTER SWAP\n";
    cout<<"x: "<<x<<" y: "<<y<<" p: "<<p<<" q: "<<q<<endl;
}

int main()
{
    function(1,2, 34.5, 22.6);
    return 0;
}