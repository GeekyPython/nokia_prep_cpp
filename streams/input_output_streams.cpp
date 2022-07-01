#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    char c;
    
    cout<<"Give Input text: ";
    cin.get(c);

    while(c != '\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }

    cout<<"The number of ";

    return 0;
}