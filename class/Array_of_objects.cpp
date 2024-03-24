#include <iostream>
using namespace std;

class students
{
    private:
        int regno;
        string name;
        float cgpa;
    public:
        void read();
        void display();
};

void students::read()
{
    cout<<"Enter name of student : ";
    cin>>name;
    cout<<"Enter register no : ";
    cin>>regno;
    cout<<"Enter CGPA : ";
    cin>>cgpa;
}

void students::display()
{
    cout<<"Name  : "<<name<<endl;
    cout<<"Regno : "<<regno<<endl;
    cout<<"CGPA  : "<<cgpa<<endl;
}

int main()
{
    int n;
    cout<<"Enter number of students :";
    cin>>n;

    students obj[n];

    for(int i=0;i<n;i++)
    {
        cout<<endl;
        obj[i].read();
    }

    cout<<"Details :-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        obj[i].display();
    }

}
