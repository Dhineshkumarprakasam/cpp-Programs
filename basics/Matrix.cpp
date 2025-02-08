//Matrix
#include <iostream>
using namespace std;

int main()
{
    int arr1[50][50],arr2[50][50],add[50][50],sub[50][50],mul[50][50],trans[50][50];

    int c,r;
    cout<<"Enter c : ";
    cin>>c;

    cout<<"Enter r : ";
    cin>>r;


    cout<<"For array 1"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<"Enter value of "<<i<<','<<j<<" : ";
            cin>>arr1[i][j];
        }
    }

    cout<<"For array 2"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<"Enter value of "<<i<<','<<j<<" : ";
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            add[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    //addition
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            add[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    //subtraction
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            sub[i][j]=arr1[i][j]-arr2[i][j];
        }
    }

    //multiplication
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<c;k++)
                mul[i][j]+=arr1[i][k]*arr2[k][j];

        }
    }

    //transpose of arr1
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            trans[i][j]=arr1[j][i];
        }
    }

    //Printing array1
    cout<<"Array 1:-"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    //Printing array2
    cout<<"Array 2:-"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    //Printing Addition
    cout<<"Addition:-"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }

    //Printing subtraction
    cout<<"Subtraction:-"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }

    //Printing multiplication
    cout<<"Multiplication:-"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }

    //Printing transpose
    cout<<"Transpose of array 1:-"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}
