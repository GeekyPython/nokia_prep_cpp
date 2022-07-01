#include<iostream>
#include<cstring>
using namespace std;

class city
{
    char *name;
    int len;

    public:
        city()
        {
            len=0;
            name = new char[len+1];
        }

        void getName()
        {
            char *s;
            s = new char[30];
            cout<<"Enter the city name: ";
            cin>>s;
            len = strlen(s);
            name = new char[len+1];
            strcpy(name, s);
        }

        void print()
        {
            cout<<"City: "<<name<<endl;
        }
};

int main()
{
    city *cptr[10];
    int n=0;
    int option;

    do
    {
        cptr[n] = new city;
        cptr[n]->getName();
        n++;
        cout<<"Do you want to input another city?\n(Choose \'1\' for yes and \'0\' for no): ";
        cin>>option;
    } while(option);

    cout<<"\n\n";

    for(int i=0; i<n; i++)
    {
        cptr[i]->print();
    }
    

    return 0;
}