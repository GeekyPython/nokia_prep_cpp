#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s("lmao");
    s += " ded";
    
    string eq1((s == "lmao ded") ? "Yes\n" : "No\n");
    string eq2((s > "lmao fook u") ? "s is longer\n" : "Alternate string is longer\n");
    

    cout<<"Final string \'s\':\n";
    cout<<s<<endl;
    
    cout<<"\nEquality relation between strings:\n";
    cout<<"Is s equal to reference string: "<<eq1<<endl;
    
    cout<<"\nGreater than relation between strings:\n";
    cout<<"Which of the two strings are greater? ";
    cout<<eq2<<endl;

    cout<<"\nCompare() function:\n";
    string eq3 = s.compare("lmao ded") ? "Equal" : "Unequal";
    cout<<s.compare("lamo edd")<<endl;
    cout<<"Is string \'s\' equal to the reference string: "<<eq3<<endl;

    cout<<"\nSubscription operator usage\n";
    cout<<s[3]<<endl;

    
    return 0;
}