#include <iostream>
using namespace std;

class comp{

private:
    int r,i;
public:
    comp();
    void operator + (comp);
    void display();
};

comp::comp()
{
    cout<<"Enter val of r : ";
    cin>>r;
    cout<<"Enter val of i : ";
    cin>>i;
}

void comp::operator + (comp obj2)
{
    r=r+obj2.r;
    i=i+obj2.i;
}

void comp::display()
{
    cout<<r<<"+"<<i<<"i"<<endl;

}

int main()
{
    comp obj1,obj2;
    obj1.display();
    obj2.display();
    
    obj1+obj2;
    obj1.display();
}
