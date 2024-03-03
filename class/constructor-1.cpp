#include <iostream>
using namespace std;

class details
{
    private:
        string name;
        int age;
    public:
        details();
        void print();
};

details::details()
{
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age  : ";
    cin>>age;
}

void details::print()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age  : "<<age<<endl;
}

int main()
{
    details obj;
    cout<<endl<<"Details:-"<<endl;
    obj.print();
}
