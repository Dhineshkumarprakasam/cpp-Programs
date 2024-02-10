//Palindrome of a number
#include <iostream>
using namespace std;

int main()
{
    int num,reverse=0;
    cout<<"Enter a number : ";
    cin>>num;

    int copied=num;

    while(num>0)
    {
        int last=num%10;
        num=num/10;
        reverse=reverse*10+last;
    }

    if(copied==reverse)
        cout<<"It is palindrome"<<endl;
    else
        cout<<"It is not palindrome"<<endl;
}
