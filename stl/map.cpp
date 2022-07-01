#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef map<string, int> phoneMap;

int main()
{
    string name;
    int number;

    phoneMap phone;
    cout<<"Enter three sets of names and numbers\n";

    for(int i=0; i<3; i++)
    {
        cin>>name;
        cin>>number;
        phone[name] = number;
    }

    phone["Jacob"] = 4444;

    phone.insert(pair<string, int> ("Bose", 5555));
    int n = phone.size();
    cout<<"\n Size of map: "<<n<<endl;
    cout<<"List of telephone numbers:\n";
    phoneMap :: iterator it;

    for(it=phone.begin(); it!=phone.end(); it++)
    {
        cout<<(*it).first<<": "<<(*it).second<<"\n";
    }
    cout<<endl;
    cout<<"Enter name: ";
    cin>>name;
    number = phone[name];
    cout<<"Number: "<<number<<endl;

    return 0;
}
