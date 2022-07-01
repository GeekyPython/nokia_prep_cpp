#include<iostream>
using namespace std;
typedef void (*FunPtr)(int, int);

void Add(int i, int j)
{
    cout<<i<<"+"<<j<<"="<<i+j<<endl;
}

void Subtract(int i, int j)
{
    cout<<i<<"-"<<j<<"="<<i-j<<endl;
}

int main()
{
    FunPtr ptr;
    ptr = &Add;
    ptr(1,2);
    cout<<endl;
    ptr = &Subtract;
    ptr(2,1);
    
    return 0;
}