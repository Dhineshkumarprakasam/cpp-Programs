//Fibonacci Series
#include <iostream>
using namespace std;

int main()
{
    int f1=-1,f2=1,f3;
    int n;

    cout<<"Enter n:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        f3=f1+f2;
        cout<<f3<<" ";
        f1=f2;
        f2=f3;
    }
}
