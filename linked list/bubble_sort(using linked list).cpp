#include<iostream>
#include<stdlib.h>
using namespace std;
struct list
{
    int info;
    struct list * next;
};
 struct list * start=NULL;
void insertend(int item)
{
     struct list *ptr;
     struct list *temp;
    ptr=new list;
    if(start==NULL)
    {
        ptr->info=item;
        ptr->next=NULL;
        start=ptr;
    }
    else
    {
        ptr->info=item;
        ptr->next=NULL;
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
    }
}
void traverse()
{
  struct list *temp;
 if(start==NULL)
 {
    cout<<"List is Empty";
 }
 else
{
    cout<<"LIST: ";
     for(temp=start;temp!=NULL;temp=temp->next)
     {
         cout<<temp->info<<" ";
     }
 }
 cout<<"\n";
}
void bubblesort()
{
    struct list *temp,*temp1;
    int var,flag=0;
    if(start==NULL)
        return;
    else
    {
        for(temp=start;temp->next!=NULL;temp=temp->next)
        {
            flag=0;
            for(temp1=start;temp1->next!=NULL;temp1=temp1->next)
            {
                if(temp1->info>temp1->next->info)
                {
                    var=temp1->info;
                    temp1->info=temp1->next->info;
                    temp1->next->info=var;
                    flag=1;
                }
            }
            if(flag==0)
                break;
        }
    }
}
int main()
{
        int n,i,item;
        cout<<"Enter number of elements to be enter in a linked list\n";
        cin>>n;
        cout<<"Enter elements\n";
        for(i=0;i<n;i++)
        {
        	cin>>item;
            insertend(item);
        }
        cout<<"Before sorting:\n";
        traverse();
        bubblesort();
         cout<<"After bubble sort:\n";
        traverse();
}
