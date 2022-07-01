#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i,j;
    char str[] = "C++ is better than C";
    int len = strlen(str);
    char *substr = new char[len];
    cout<<"The main string is : "<<str<<endl;
    cout<<"Enter the substring that needs to be searched: ";
    cin>>substr;

    int k,len2=strlen(substr);

    for(i=0; i<len;i++)
    {
        k=i;
        for(j=0; j<len2; j++)
        {
            if(str[k] == substr[j])
            {
                if(j==len2-1)
                {
                    cout<<"Substring present in the main string\n";
                    return 0;
                }
                k++;
            }

            else break;
        }
    }

    if(i==len) cout<<"The substring is not present in the main string\n";

    return 0;
}