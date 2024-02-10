//Prime numbers
#include <iostream>
using namespace std;

int main()
{
    int prime=1;
    int num;
    cout<<"Enter number :";
    cin>>num;

    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            prime=0;
            break;
        }
    }

    if(prime==1)
        cout<<"It is prime"<<endl;
    else
        cout<<"It is not prime"<<endl;
}
