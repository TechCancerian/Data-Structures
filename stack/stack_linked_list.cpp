#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct list{
	int info;
	struct list *next;
};
struct list *top=NULL;
void push(int item)
{
	struct list *ptr;
	ptr=new list();
	if(top==NULL)
	{
		ptr->info=item;
		ptr->next=NULL;
		top=ptr;
	}
	else
	{
		ptr->info=item;
		ptr->next=top;
		top=ptr;
	}	
}
void pop()
{
	struct list *temp;
	if(top==NULL)
	{
		cout<<"Underflow";
	}
	else
	{
		temp=top;
		top=temp->next;
		delete temp;
	}
}
void traverse(){
	struct list *temp;
	temp=top;
	while(temp!=NULL)
	{
		cout<<temp->info<<" ";
		temp=temp->next;
	}
}
int main()
{
int item,choice;
	while(1)
	{
			cout<<"1. for insertion at begining in a stack\n";
			cout<<"2. for deletion at begining in a stack\n";
			cout<<"3. for traversing\n";
			cout<<"   Enter c to exit\n";
			cout<<"enter the choice\n";
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"enter element u want to insert at begining";
					cin>>item;
							push(item);
					break;
				case 2:
					pop();
					traverse();
					getch();
					break;
				case 3:
					traverse();
					getch();
					break;
				default:
					exit(0);
			}
			system("CLS");
	}
}
