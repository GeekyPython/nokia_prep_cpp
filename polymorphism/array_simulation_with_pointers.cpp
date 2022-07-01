#include<iostream>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    int * aptr = &a[0];

    for(int i=0; i<5; i++)
    {
        cout<<*(aptr+i)<<endl;
    }

    return 0;
}