#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int * ptr = &a;
    cout<<"The value of a is : "<<*ptr<<endl;
    *ptr += a; //access value of the variable with the help of a deferencing operator
    cout<<"The value of a post increment is : "<<*ptr<<endl;
    return 0;
}