#include<iostream>
#include<cstring>
using namespace std;

class person
{
    char name[20];
    float age;

    public:
        person(char *s, float a)
        {
            strcpy(name, s);
            age = a;
        }

        person &greater(person &x)
        {
            if(x.age>=age) return x;
            return *this;
        }

        void display()
        {
            cout<<"Name: "<<name<<"\n"<<"Age: "<<age<<"\n";
        }
};

int main()
{
    person P1("John", 35.23), P2("Malubulul", 69.69), P3("Loca", 53.27);
    person P = P1.greater(P2);
    cout<<"Elder person is: \n";
    P.display();

    P = P1.greater(P3);
    cout<<"The Elder person is :\n";
    P.display();

    return 0;
}