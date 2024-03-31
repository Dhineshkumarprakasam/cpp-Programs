#include <iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        A()
        {
            cout<<"Enter : ";
            cin>>a;
        }
        A great(A obj)
        {
            if(a>obj.a)
                return *this;
            else
                return obj;
        }
        void display()
        {
            cout<<"Value : "<<a;
        }
};

int main()
{
    A obj1,obj2;
    A obj3=obj1.great(obj2);
    obj3.display();
}
