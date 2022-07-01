#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;


int main()
{
    int x[] = {12,34,25,43,33,56,44,67};
    int y[] = {32,33,12,11,23,27,34,54};
    sort(x, x+5, greater<int>());
    sort(y,y+5);

    for(int i=0; i<8; i++)
    {
        cout<<x[i]<<" ";
    }

    cout<<endl;


    for(int i=0; i<8; i++)
    {
        cout<<y[i]<<" ";
    }

    cout<<endl;

    int z[9];
    merge(x, x+5, y, y+4, z);


    for(int i=0; i<9; i++)
    {
        cout<<z[i]<<" ";
    }

    cout<<endl;

    return 0;
}
