#include <iostream>
using namespace std;

class great
{
    private:
        int a,b,result;
    public:
        void read();
        void calculate();
        void display();
};

void great::read()
{
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter valud of b :";
    cin>>b;
}

void great::calculate()
{
    if(a>b)
        result=a;
    else
        result=b;
}

void great::display()
{
    cout<<"The greatest element is : "<<result;
    cout<<endl;
}

int main()
{
    great obj;
    obj.read();
    obj.calculate();
    obj.display();

}

