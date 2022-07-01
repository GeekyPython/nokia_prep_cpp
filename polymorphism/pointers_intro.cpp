#include<iostream>
using namespace std;

int main()
{
    int *ptr, a, **rptr;
    ptr = &a;
    rptr = &ptr;
    
    cout<<"The address of 'a' : "<<ptr<<endl;
    cout<<"The address of ptr : "<<rptr<<endl;

    cout<<"\n\nAfter incrementing the values of ptr and rptr:\n";
    ptr += 2;
    rptr += 2;
    cout<<"ptr after increment : "<<ptr<<endl;
    cout<<"rptr after increment : "<<rptr<<endl;

    return 0;
}