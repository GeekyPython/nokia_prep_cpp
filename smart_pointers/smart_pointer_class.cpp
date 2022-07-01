#include<iostream>
using namespace std;

class SmartPointer
{
    int *pointer;

    public:
        explicit SmartPointer(int *p = NULL)
        {
            pointer = p;
        }

        ~SmartPointer()
        {
            delete(pointer);
        }

        int& operator *()
        {
            return *pointer;
        }
};

int main()
{
    SmartPointer ptr(new int());
    *ptr = 20;
    cout<<*ptr<<endl;

    return 0;
}