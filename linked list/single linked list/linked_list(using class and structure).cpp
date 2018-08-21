#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
		struct list{
	int info;
	struct list *next;
};

class list1{
	private:
   struct list * start;
public:
    list1()
    {
        start=NULL;
    }
		void insertbig(int);
		void insertend(int);
		void traverse();
		void deletebeg();
		void deleteend();
		void reverse1();
				
};
void list1::insertbig(int item)
{
			struct list *ptr;
						ptr=new list();
						if(start==NULL)
						{
							start=ptr;
							ptr->info=item;
							ptr->next=NULL;
						}
						else
						{
							ptr->info=item;
							ptr->next=start;
							start=ptr;
						}
}
void list1::insertend(int item)
{
	struct list *ptr,*temp;
		ptr=new list();
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
void list1::traverse()
{
		struct list *temp;
		if(start==NULL)
		cout<<"List is empty\n";
		else
		{
			temp=start;
			while(temp!=NULL)
			{
				cout<<temp->info<<" ";
				temp=temp->next;
			}
			cout<<"\n";
		}
	}
void list1::deletebeg()
{
	int item,num,i;
		struct list *temp;
		if(start==NULL)
		{
			cout<<"Underflow\n";
		}
		else
		{
			temp=start;
			start=temp->next;
			delete temp;
		}
}
void list1::deleteend()
{
	int item,num,i;
		struct list *temp,*temp1;
		if(start==NULL)
		{
			cout<<"Underflow\n";
		}
		else if(start->next==NULL)
		{
			temp=start;
			start=NULL;
			delete temp;
		}
		else{	
			temp=start;
			while(temp->next!=NULL)
			{
				temp1=temp;
				temp=temp->next;
			}
				temp1->next=NULL;
			delete temp;
		}
}

void list1::reverse1()
	{
	    struct list *temp,*next,*prev;
    if(start==NULL)
    {
            cout<<"No node\n";
    }
    else if(start->next==NULL)
    {
      cout<<"Only one node, result is same\n";
    }
    else
    {
        prev=NULL;
        temp=start;
        next=NULL;
        while(temp!=NULL)
        {
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        start=prev;
    }
	}
int main()
{
	list1 obj;
int item,choice;
	while(1)
	{
			cout<<"1. for insertion at begining in a linked list\n";
			cout<<"2. for insertion at end in a linked list\n";
			cout<<"3. for deletion at begining in a linked list\n";
			cout<<"4. for deletion at end in a linked list\n";
			cout<<"5. for reversing the list\n";
			cout<<"6. To print\n";
			cout<<"   Enter c to exit\n";
			cout<<"enter the choice\n";
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"enter element u want to insert at begining";
					cin>>item;
					obj.insertbig(item);
					break;
				case 2:
					cout<<"enter element u want to insert at the end";
					cin>>item;
					obj.insertend(item);
					break;
				case 3:
					obj.deletebeg();
					obj.traverse();
					getch();
					break;
				case 4:
					obj.deleteend();
					obj.traverse();
					getch();
					break;
				case 5:
					obj.reverse1();
					obj.traverse();
					getch();
					break;
				case 6:
					obj.traverse();
				getch();
				break;
				default:
					exit(0);
			}
			system("CLS");
	}
}
