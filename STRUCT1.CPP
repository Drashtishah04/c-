#include<stdio.h>
#include<conio.h>
#include<iostream.h>
struct university
{
	int id;
	char nm[30];
};
void main()
{
	struct university u;
	clrscr();
	cout<<"\nEnter ID: ";
	cin>>u.id;
	cout<<"\nEnter college name: ";
	cin>>u.nm;
	cout<<u.id;
	cout<<u.nm;
	getch();
}