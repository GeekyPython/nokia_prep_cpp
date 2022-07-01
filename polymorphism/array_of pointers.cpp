#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i=0;
    char *ptr[10] = {"books", "television", "games", "birdwatching", "sports", "hiking"};
    char str[25];

    cout<<"Enter your hobby: ";
    cin>>str;

    for(i=0; i<6; i++)
    {
        if(!strcmp(str, ptr[i]))
        {
            cout<<"Your hobby is available here\n";
            break;
        }
    }

    if(i==6) cout<<"Your hobby is not available here\n";

    return 0;
}