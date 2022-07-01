#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,87,23,5,77,88,34,56,67,89};
    int i, num, *ptr;
    ptr = arr;

    cout<<"Enter target value: ";
    cin>>num;

    for(int i=0; i<10; i++)
    {
        if(*ptr == num)
        {
            cout<<num<<" is found in the array.\n";
            break;
        }

        else if(i==9)
        {
            cout<<num<<" is not present in this array.\n";
        }

        ptr++;
    }
    
    return 0;
}