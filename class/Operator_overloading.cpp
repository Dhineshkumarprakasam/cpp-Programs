#include <iostream>
using namespace std;

class A
{
private:
    int a;
public:
    void read();
    void display();
    friend int operator>(A,A);
};

void A::read()
{

    cout<<"Enter the value of a:";
    cin>>a;
}

void A::display()
{
    cout<<"Value : "<<a<<endl;
}

int operator > (A obj1,A obj2)
{

    if(obj1.a>obj2.a)
        return 1;
    else
        return 0;
}

int main()
{

    A obj1,obj2;
    obj1.read();
    obj2.read();
    obj1.display();
    obj2.display();
    int a=(obj1>obj2);
    if(a==1)
      cout<<"True";
    else
      cout<<"False";
}
