#include <iostream>
using namespace std;

class number
{
    public:
        int num;
        number()
        {
            cout<<"Enter your number : ";
            cin>>num;
        }
};

int main()
{
    int n;
    cout<<"Enter count of numbers : ";
    cin>>n;

    number obj[n];

    //reading
    for(int i=0;i<n;i++)
    {
        obj[i];
    }


    //finding maximum element
    int maximum=obj[0].num;
    for(int i=0;i<n;i++)
    {
        if(obj[i].num>maximum)
        {
            maximum=obj[i].num;
        }
    }

    cout<<"The greatest number is : "<<maximum;
}
