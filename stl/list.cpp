#include<iostream>
#include<list>
using namespace std;

void display(list<int>l)
{
    list<int>::iterator it = l.begin();
    
    while(it != l.end())
    {
        cout<<*it<<" ";
        it++;
    }

    cout<<"\n";
}

int main()
{
    list<int>list1, list2(5,2);

    int temp;

    cout<<"Enter list 1 items: ";

    for(int i=0; i<3; i++)
    {
        cin>>temp;
        list1.push_back(temp);
    }

    cout<<"The two lists: \n";
    cout<<"List 1: ";
    display(list1);

    cout<<"List 1 reversed: ";
    list1.reverse();
    display(list1);

    list<int> list3, tempList = list1;
    list1.merge(list2);
    list3 = list1;

    cout<<"List 1 merged with list 2: ";
    display(list3);

    cout<<"List 2: ";
    display(list2);

    return 0;
}