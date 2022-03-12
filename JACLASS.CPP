#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rollno;
	char name[20];
	void display()
	{
	cout<<"roll is :"<<s1.rollno<<endl;
	cout<<"Name is :"<<s1.name<<endl;
	}
};
void main()
{
	student s1;
	clrscr();
	cout<<"Enter Rollno"<<endl;
	cin>>s1.rollno;
	cout<<"Enter Name"<<endl;
	cin>>s1.name;
	cout<<"roll is :"<<s1.rollno<<endl;
	cout<<"Name is :"<<s1.name<<endl;
	getch();
}
