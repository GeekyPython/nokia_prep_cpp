#include<iostream>
using namespace std;

class Test
{
    int * a;

    public:
        Test(int size)
        {
            a = new int[size];
            cout<<"Constructor message: new integer array of size "<<size<<" was created.\n";
        }

        ~Test()
        {
            delete a;
            cout<<"Destructor message: Freed up the memory allocated to the integer array.\n";
        }

};

int main()
{
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;

    cout<<"Creating an object of the test class....\n";
    Test t(s);

    return 0;
}