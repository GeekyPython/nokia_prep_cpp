#include<iostream>
using namespace std;

class Language
{
    public:
        virtual void sayHello() = 0;
};


class English : public Language
{
    public:
        void sayHello(){cout<<"Hello\n";}
};  

class Hindi : public Language
{
    public:
        void sayHello(){cout<<"Namashkaar\n";}
};

int main()
{
    Language *list[2];
    Hindi h;
    English e;

    list[0] = &h;
    list[1] = &e;

    list[0]->sayHello();
    list[1]->sayHello();

    return 0;
}
