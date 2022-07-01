#include<iostream>
using namespace std;

namespace japanese
{
    string greeting = "Konnichiwa";
}

string greeting = "Hi";

int main()
{
    cout<<greeting;
    cout<<endl<<japanese::greeting;

    return 0;
}

