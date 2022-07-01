#include<iostream>
using namespace std;

class item
{
    int code;
    float price;

    public:
        void getData(int a, float b)
        {
            code = a;
            price = b;
        }

        void show()
        {
            cout<<"Code: "<<code<<endl<<"Price: "<<price<<endl;
        }
};

const int size = 2;

int main()
{
    item *p = new item[size];
    item *d = p;
    int x, i;
    float y;

    for(i=0;i<size;i++)
    {
        cout<<"Input code and price for the item "<<i+1<<": ";
        cin>>x>>y;
        p->getData(x,y);
        p++;
    }

    for(i=0;i<size;i++)
    {
        cout<<"Item "<<i+1<<endl;
        d->show();
        d++;
    }

    return 0;
}