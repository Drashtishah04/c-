#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class A
{
	public:
		void show()
		{
			cout<<"\n show";
		}
		void display()
		{
			cout<<"\n display";
			show();
		}
};
void main()
{
	clrscr();
	A x;
	x.display();
	getch();
}