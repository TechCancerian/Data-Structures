#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void bubble(int a[],int *n)
{
	int i,j,temp,flag=0;
	for(i=0;i<*n-1;i++)
	{
		flag=0;
		for(j=0;j<*n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			flag=1;	
			}
			if(flag==0)
			break;
		}
	}
}
void selection(int a[],int *n)
{
	int i,j,temp;
for(i=0;i<*n-1;i++)
{
	for(j=i+1;j<*n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}	
}
void insertion(int a[],int *n)
{
	int temp,i,j;
for(i=1;i<*n;i++)
{
	temp=a[i];
	j=i-1;
	while(j>=0 && a[j]>temp)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=temp;
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
			cout<<"1.  For sorting array using bubble sort\n";
			cout<<"2.  For sorting array using selection sort\n";
			cout<<"3.  For sorting array using insertion sort\n";
			cout<<"4. For printing array\n";
			cout<<"enter the choice\n";
			cin>>choice;
			switch(choice)
			{
				case 1:
					bubble(a,&n);
					print(a,&n);
					getch();
					break;
				case 2:
					selection(a,&n);
					print(a,&n);
					getch();
					break;
				case 3:
					insertion(a,&n);
					print(a,&n);
					getch();
					break;
				case 4:
					print(a,&n);
				getch();
				break;
				default:
					exit(0);
			}
			system("CLS");
	}
}
