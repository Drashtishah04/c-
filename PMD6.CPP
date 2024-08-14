#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=4;i>=1;i--)
	{
		for(k=3;k>=i;k--)
		{
			cout<<"  ";
		}
		for(j=i;j>=1;j--)
		{
			cout<<j<<" ";
		}
		for(j=2;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	getch();
}