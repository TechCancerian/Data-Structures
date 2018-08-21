#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void insertarray(int a[],int *n)
{
	int item,i,pos=0;
	cout<<"enter the item u want to insert in a array\n";
	cin>>item;
	cout<<"enter the position at which u want to insert the item\n";
	cin>>pos;
	for(i=*n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[i+1]=item;
	*n=*n+1;
}

void deletevalue(int a[],int *n)
{
	int item,flag=0,pos=0,i;
	cout<<"enter the value which u want to delete from the array\n";
	cin>>item;
	for(i=0;i<*n;i++)
	{
		flag=0;
		if(a[i]==item)
		{
			pos=i;
			break;
		}
	}
	for(i=pos+1;i<*n;i++)
	{
		a[i-1]=a[i];
	}
	*n=*n-1;
}
void deletepos(int a[],int *n)
{
	int pos=0,i;
	cout<<"Enter the position at which u want to delete the value\n";
	cin>>pos;
	for(i=pos;i<*n;i++)
	{
		a[i-1]=a[i];
	}
	*n=*n-1;
}
void linear(int a[],int *n)
{
	int flag=0,i,item;
	cout<<"enter the element u want to search";
	cin>>item;
	for(i=0;i<*n;i++)
	{
		flag=0;
		if(a[i]==item)
		{
			cout<<item<<" is found at index "<<i+1<<"\n";
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"item not found in array";
}
void binary(int a[],int *n)
{
	int beg,end,mid,item;
	cout<<"Enter the element u want to search";
	cin>>item;
	beg=0;
	end=*n-1;
	mid=(beg+end)/2;
	while(a[mid]!=item && beg<=end)
	{
		if(item>a[mid])
		{
			beg=mid+1;
		}
		else{
			end=mid-1;
		}
			mid=(beg+end)/2;
	}
	if(a[mid]==item)
	{
		cout<<item<<" is found at index "<<mid+1;
	}
	else{
		cout<<"item is not found in array";
	}
}
void print(int a[],int *n)
{
	int i;
	for(i=0;i<*n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
int item,choice,a[100],n,i;
cout<<"Enter how many values u want to enter in a array\n";
					cin>>n;
					cout<<"Enter values\n";
					for(i=0;i<n;i++)
					cin>>a[i];
					system("CLS");
	while(1)
	{
			cout<<"1.  for inserting a value at any position in array\n";
			cout<<"2.  for deleting any value in arry\n";
			cout<<"3.  for deleting value at specific position in array\n";
			cout<<"4.  for searching value in array using linear search\n";
			cout<<"5.  for searching value in array using binary search\n";
			cout<<"6. for printing array\n";
			cout<<"enter the choice\n";
			cin>>choice;
			switch(choice)
			{
				case 1:
					insertarray(a,&n);
					print(a,&n);
					getch();
					break;
				case 2:
					deletevalue(a,&n);
					print(a,&n);
					getch();
					break;
				case 3:
					deletepos(a,&n);
					print(a,&n);
					getch();
					break;
				case 4:
					linear(a,&n);
					getch();
					break;
				case 5:
					binary(a,&n);
					getch();
					break;
				case 6:
					print(a,&n);
				getch();
				break;
				default:
					exit(0);
			}
			system("CLS");
	}
}
