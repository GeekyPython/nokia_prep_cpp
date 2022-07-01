#include<iostream>
#include<string>
using namespace std;


int main()
{
    string sample("This is a string used for string manipulation operations using string methods.");

    cout<<"Demonstration of the access methods for strings:\n";
    cout<<"The character at position 4: "<<sample.at(3)<<endl;
    cout<<"The substring method (uses a starting position and size to pick out a substring from the root string): "<<sample.substr(4, 5)<<endl;
    cout<<"The find() method (finds the starting index of the substring being looked up): "<<sample.find("str")<<endl;
    cout<<"The first occurence of the substring \'string\' is: "<<sample.find_first_of("string")<<endl;
    cout<<"The last occurence of the substring \'string\' is: "<<sample.find_last_of("string")<<endl;

    return 0;
}