#include<iostream>
#include<cstring>
using namespace std;

class P1
{
    public:
       void display()
       {
           cout<<"Class P1\n";
       }
};

class P2
{
    public:
        void display()
        {
            cout<<"Clas P2\n";
        }
};

class Ch : public P1, public P2
{
    public:
        void display()
        {
            P1::display(); // Class resolution operator is used to distinguish between two members with same name in different classes
        }
};

int main()
{
    Ch c;
    c.display();
    c.P2::display();

    return 0;
}