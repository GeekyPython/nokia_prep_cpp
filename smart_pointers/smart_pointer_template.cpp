#include<iostream>
using namespace std;

template<class T>
class SmartPointer
{
    T* pointer;

    public:
        explicit SmartPointer(T * p)
        {
            pointer = p;
        }  

        ~SmartPointer()
        {
            delete(pointer);
        }

        T& operator*()
        {
            return *pointer;
        }
};

int main()
{
    SmartPointer<char> ptr(new char());
    *ptr = 'c';
    cout<<*ptr<<endl;
    return 0;
}