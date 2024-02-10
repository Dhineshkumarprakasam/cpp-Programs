//Maximum and minimum element in array

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int element_count;
    cout<<"Enter number of elements : ";
    cin>>element_count;

    //getting input of array elements
    for(int i=0;i<element_count;i++)
    {
        cout<<"Enter element no "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<endl;

    //printing array elements
    for(int i=0;i<element_count;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    int maximum=arr[0];
    int minimum=arr[0];

    for(int i=0;i<element_count;i++)
    {
        if(arr[i]>maximum)
            maximum=arr[i];
        if(arr[i]<minimum)
            minimum=arr[i];
    }

    cout<<"Maximum : "<<maximum<<endl<<"Minimum : "<<minimum<<endl;
}
