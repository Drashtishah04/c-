#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int strlen1(const char *s);
void main()
{
	char *s;
	int i;
	clrscr();
	cout<<"enter a string:";
	cin>>s;
	i=strlen1(s);
	cout<<"\n length="<<i;
	getch();
}
int strlen1(const char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	return i;
}
