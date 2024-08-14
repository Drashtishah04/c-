#include<stdio.h>
#include<conio.h>
#include<iostream.h>
const int size=5;
class student
{
	int roll_no;
	int marks[size];
	public:
		void getdata();
		void tot_marks();
		void display()
		{
			cout<<"\n Roll no="<< roll_no;
			for(int i=0;i<size;i++)
			{
				cout<<"\n"<<marks[i];
			}
		}
};
void student::getdata()
{
	cout<<"\n enter roll no:";
	cin>>roll_no;
	for(int i=0;i<size;i++)
	{
		cout<<"enter marks in subject"<<(i+1)<<":";
		cin>>marks[i];
	}
}
void student::tot_marks()
{
	int total=0;
	for(int i=0;i<size;i++)
	{
		total+=marks[i];
	}
	cout<<"\n\n total marks"<<total;
}
void main()
{
	student stu;
	clrscr();
	stu.getdata();
	stu.display();
	stu.tot_marks();
	getch();
}