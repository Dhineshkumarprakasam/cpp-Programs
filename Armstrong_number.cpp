//Armstrong number for 3 digit numbers
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;

    int copied=num;
    int sum=0;

    while(num>0)
    {
        int last=num%10;
        num=num/10;
        sum+=pow(last,3);
    }
    if(sum==copied)
        cout<<"It is Armstrong number"<<endl;
    else
        cout<<"It is Not Armstrong number"<<endl;

}
