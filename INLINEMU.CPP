#include<iostream.h>
#include<conio.h>
#include<stdio.h>
inline int mul(int x,int y)
{
	return(x*y);
}
int main()
{
	int x,y,z;
	clrscr();
	cout<<"enter x and y:";
	cin>>x>>y;
	z=mul(x,y);
	cout<<"\n z="<<z;
	getch();
}