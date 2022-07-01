#include<iostream>
#include<cstring>
using namespace std;

class P1
{
    public:
        char * papaName;

        P1()
        {
            papaName = "Pablo";
        }

        void sayPapaHola()
        {
            cout<<"Hola from Papa!\n";
        }
};

class P2
{
    public:
        char * mamaName;

        P2()
        {
            mamaName = "Maria";
        }

        void sayMamaHola()
        {
            cout<<"Hola from Mama!\n";
        }
};

class Ch : public P1, public P2
{
    public:
        char * childName = new char[sizeof(papaName) + sizeof(mamaName) + 1];

        Ch()
        {
            strcpy(childName, papaName);
            strcat(childName, " ");
            strcat(childName, mamaName);
            strcat(childName, " Lulu");
        }

        void sayName()
        {
            cout<<"Hola! My name is "<<childName<<endl;
        }
};

int main()
{
    P1 papa;
    P2 mama;
    Ch child;

    papa.sayPapaHola();
    mama.sayMamaHola();
    child.sayName();

    return 0;
}