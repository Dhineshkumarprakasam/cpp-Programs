#include <iostream>
using namespace std;

class great
{
private:
    int a;
public:
    void read();
    void compute(great);
};


void great::read()
{
    cout<<"Enter value of a :";
    cin>>a;
}

void great::compute(great c)
{
    if(a>c.a)
    {
        cout<<a<<" is great";
    }
    else
        cout<<c.a<<" is great";
}

int main()
{
    great obj1;
    great obj2;
    obj1.read();
    obj2.read();
    obj1.compute(obj2);

}
