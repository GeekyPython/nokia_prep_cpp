#include<iostream>
using namespace std;

int main()
{
    int array[] = {8,12,43,24,57,62};
    int *pointer = array;
    cout<<*(++pointer)<<endl;

    return 0;
}