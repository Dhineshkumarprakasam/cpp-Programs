//Upper and lower diagonal
#include <iostream>
using namespace std;

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};


    cout<<"Upper triangle:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j>i)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    cout<<"Lower triangle:"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i>j)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }


}
