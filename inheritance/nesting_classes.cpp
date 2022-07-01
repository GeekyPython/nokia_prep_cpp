#include<iostream>
using namespace std;

class alpha
{
    int x;

    public:
        alpha(int a) : x(a) {cout<<"alpha initiated\n";}
        void showAlpha();
};

void alpha::showAlpha()
{
    cout<<"Alpha variable: "<<x<<endl;
}

class beta
{
    int y;
    
    public:
        beta(int a) : y(a) {cout<<"beta initiated\n";}
        void showBeta()
        {
            cout<<"Beta variable: "<<y<<endl;
        }
};

class gamma
{
    alpha a;
    beta b;
    int z;

    public:
        gamma(int p, int q, int r): a(p), b(q), z(r) {}
        void showGamma()
        {
            cout<<"Gamma variable: "<<z<<endl;
        }
};

int main()
{
    gamma g(2,3,4);
    g.showGamma();
}   