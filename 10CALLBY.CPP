#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int a,b;
void swap(int*,int*);
void main()
{
	clrscr();
	cout<<"\n enter value:";
	cin>>a;
	cout<<"\n enter value:";
	cin>>b;
	cout<<"\n A= \t B="<<a,b;
	swap(&a,&b);
	cout<<"\n A= \t B="<<a,b;
	getch();
}
void swap(int *x,int *y)
{
	int *temp;
	*temp=*x;
	a=*y;
	b=*temp;
}