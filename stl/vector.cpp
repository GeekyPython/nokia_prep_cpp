#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1(10,2); //vector containing 10 elements, all being 2
    vector<int>v2(v1); //copies v1's values into v2 
    vector<int>v3;

    cout<<"Enter the number of values to be added: ";
    int n, temp;
    cin>>n;

    cout<<"Enter the values:\n";

    for(int i=0; i<n; i++)
    {
        cin>>temp;
        v3.push_back(temp);
    }

    cout<<"Your entered values:\n";

    for(int i=0; i<n; i++)
    {
        cout<<v3[i]<<" ";
    }


    vector<int>::iterator it = v3.begin();
    it += 2;
    v3.insert(it, 2, 3);

    cout<<"\nAfter insertion\n";

    for(int i=0; i<n; i++)
    {
        cout<<v3[i]<<" ";
    }

    cout<<endl;
    string isEmpty=(v3.empty()) ? "Yes\n" : "No\n";

    cout<<"Capacity: "<<v3.capacity()<<endl;
    cout<<"Size: "<<v3.size()<<endl;
    cout<<"Value at 3rd position: "<<v3.at(3)<<endl;
    cout<<"Is the vector empty? "<<isEmpty;


    cout<<"\n";


    return 0;
}