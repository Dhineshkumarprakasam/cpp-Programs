#include <iostream>
using namespace std;

class A
{
    private:
        int a[10],n;
    public:
        A();
        int &operator[](int);
};

 A::A()
{
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<"th value : ";
        cin>>a[i];
    }
}

int &A::operator[](int i)
{
    return a[i];
}

int main()
{
    A obj1;
    cout<<obj1[0]<<endl;
    cout<<obj1[1]<<endl;
    cout<<obj1[2]<<endl;
    cout<<obj1[3]<<endl;
    obj1[0]=100;
    cout<<obj1[0]<<endl;
}
