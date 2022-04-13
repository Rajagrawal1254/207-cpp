#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rollno;
	char name[20];
	void display()
	{
	cout<<"inside class";
	}
};
void main()
{
	student s;
	clrscr();
	cout<<"enter the rollno"<<endl;
	cin>>s.rollno;
	cout<<"enter the name"<<endl;
	cin>>s.name;

	cout<<"rollno is: "<<s.rollno<<endl;
	cout<<"name is : "<<s.name<<endl;
	getch();
	}