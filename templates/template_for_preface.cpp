#include<iostream>
using namespace std;

template<class T>
class vector
{
    T *v;
    int size;

    public:
        vector(int m)
        {
            v = new T[size = m];

            for(int i=0; i<size; i++)
            {
                v[i] = 0;
            }
        }

        vector(T *y)
        {
            size = sizeof(y)/sizeof(T)+1;
            v = new T[size];

            for(int i=0; i<size; i++)
            {
                v[i] = y[i];
            }
        }

        T operator*(vector &y)
        {
            T sum = 0;
            for(int i=0; i<size; i++)
            {
                sum += this->v[i] + y.v[i];
            }

            return sum;
        }

        void display()
        {
            for(int i=0; i<size; i++)
            {
                cout<<v[i]<<" ";
            }

            cout<<endl;
        }
};

int main()
{
    int arr1[3] = {1,2,3};
    float arr2[3] = {1.3,2.2,3.5};
    
    vector<int>v1(arr1);
    vector<float>v2(arr2);
    v1 = arr1;
    v2 = arr2; 

    cout<<"V1 = ";
    v1.display();

    cout<<"V2 = ";
    v2.display();

    return 0;
}