#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,j;
	clrscr();
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	getch();
}

