//Sorting elements in ascending order
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

    //printing array elements before sorting
    cout<<"Before Sorting :-"<<endl;
    for(int i=0;i<element_count;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    //Sorting elements
    for(int i=0;i<element_count;i++)
    {
        for(int j=i+1;j<element_count;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    //printing array elements after sorting
    cout<<"After Sorting :-"<<endl;
    for(int i=0;i<element_count;i++)
        cout<<arr[i]<<" ";
    cout<<endl;



}
