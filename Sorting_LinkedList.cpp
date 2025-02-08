#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=nullptr;
    }
};

int main()
{
    //creating a linked list
    int n;
    cout<<"Enter n : ";
    cin>>n;

    node *head=nullptr;
    node *temp=nullptr;

    for(int i=0;i<n;i++)
    {
        int data;
        cout<<"Enter data : ";
        cin>>data;

        node *newnode = new node(data);

        if(head==nullptr)
        {
            head=newnode;
            temp=head;
        }

        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }

    //before sorting
    for(node *i=head;i!=nullptr;i=i->next)
        cout<<i->data<<" ";


    //sorting
    for(node *i=head;i!=nullptr;i=i->next)
    {
        node *m=i;
        for(node *j=i;j!=nullptr;j=j->next)
        {
            if(j->data<m->data)
                m=j;
        }

        if(m!=i)
        {
            int t=m->data;
            m->data=i->data;
            i->data=t;
        }
    }

    cout<<endl;
    cout<<"Sorted :";
    //after sorting
    for(node *i=head;i!=nullptr;i=i->next)
        cout<<i->data<<" ";
}
