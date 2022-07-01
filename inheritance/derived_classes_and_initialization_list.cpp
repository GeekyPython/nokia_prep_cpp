#include<iostream>
using namespace std;

class alpha
{
    int n1, n2;

    public:
        alpha(int a, int b) : n1(a), n2(b) {
            cout<<"alpha initialized\n";
        }
        void showAlpha();
};

void alpha::showAlpha()
{
    cout<<"Class alpha numbers: "<<n1<<", "<<n2<<endl;
}

class beta
{
    int n3, n4;

    public:
        beta(int a, int b) : n3(a), n4(b+a) {
            cout<<"beta initialized\n";
        }
        void showBeta();
};

void beta :: showBeta()
{
    cout<<"Class beta numbers: "<<n3<<", "<<n4<<endl;
}

class gamma : public beta, public alpha
{
    int n5, n6;

    public:
        gamma(int a, int b, int c) : alpha(a,b), beta(b,b), n5(b) 
        {
            n6 = c;
            cout<<"gamma initialized\n";
        }
        void showGamma();
};

void gamma::showGamma()
{
    cout<<"Class gamma numbers: "<<n5<<", "<<n6<<endl;
}

int main()
{
    gamma gm(2,3,4);

    gm.showAlpha();
    gm.showBeta();
    gm.showGamma();
    
    return 0;
}