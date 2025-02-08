//series of prime numbers
#include <iostream>
using namespace std;

int main()
{
    int coun=0,num=1;
    cout<<"Enter count : ";
    cin>>coun;
    int printed=0;
    while(printed<coun)
    {
        int prime=1;
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
        {
            cout<<num<<" ";
            printed++;
        }
        num++;
    }
}
