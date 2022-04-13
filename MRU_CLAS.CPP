//program
#include<iostream.h>
#include<conio.h>
class student
{
private:
	int rollno;
	char sname[50];
	char sclass[44];

public:
       void get();
       void put();
};

void student::get()
{
  cout<<"Enter rollno->";
  cin>>rollno;
  cout<<"enter name->";
  cin>>sname;
  cout<<"enter class->";
  cin>>sclass;
}
void student::put()
 {
 cout<<rollno<<"\t\t"<<sname<<"\t\t"<<sclass<<endl;
 }
main()
{
	clrscr();
	student s1,s2,s3;
	s1.get();
	s2.get();
	s3.get();
	cout<<"##########################################################"<<endl;
	cout<<"rollno\t\tname\t\tclass"<<endl;
	cout<<"##########################################################"<<endl;
	s1.put();
	s2.put();
	s3.put();
	getch();
}