#include <iostream>
using namespace std;

class A
{
    int a;
    public:
        friend void operator>>(istream &in,A &o)
        {
            cout<<"enter : ";
            in>>o.a;
        }

        friend void operator<<(ostream &out,A &o)
        {
            out<<o.a<<endl;
        }
};

int main()
{
    A obj;
    cin>>obj;
    cout<<obj;
}
