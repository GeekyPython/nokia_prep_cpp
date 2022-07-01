#include<iostream>
#include<cstring>
using namespace std;

class media
{
    protected:
        char title[50];
        float price;
    
    public:
        media(char *t, float p)
        {
            strcpy(title, t);
            price = p;
        }
        virtual void display(){}
};

class book : public media
{
    int pages;

    public:
        book(char *b, float pr, int pa):media(b,pr)
        {
            pages = pa;
            price = pr;
            strcpy(title, b);
        }

        void display()
        {
            cout<<"\nBook Information\n";
            cout<<"Title: "<<title<<endl;
            cout<<"Number of pages: "<<pages<<endl;
            cout<<"Price: "<<price<<endl;
        }
};

class tape : public media
{
    float time;

    public:
        tape(char *t, float pr, float ti):media(t, pr)
        {
            strcpy(title, t);
            time = ti;
            price = pr;
        }

        void display()
        {
            cout<<"\nVideo tape description\n";
            cout<<"Title: "<<title<<endl;
            cout<<"Play Time: "<<time<<endl;
            cout<<"Price: "<<price<<endl;
        }
};

int main()
{
    char *title = new char[50];
    float price, time;
    int pages;

    cout<<"Enter book details:\n";
    cout<<"Title: ";
    cin>>title;
    cout<<"Price: ";
    cin>>price;
    cout<<"Pages: ";
    cin>>pages;

    book book1(title, price, pages);

    cout<<"Enter tape details:\n";
    cout<<"Title: ";
    cin>>title;
    cout<<"Price: ";
    cin>>price;
    cout<<"Play Time: ";
    cin>>time;

    tape tape1(title, price, time);

    cout<<"DISPLAYING THE DETAILS\n";
    media *list[2];
    list[0] = &book1;
    list[1] = &tape1;
    list[0]->display();
    list[1]->display();

    return 0;
}