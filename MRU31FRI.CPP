//friend function
#include<iostream.h>
#include<conio.h>
class demo           //decleration
{
	private:
	       int a;
	public:
	       friend void get(demo s);//decleration of friend function.
};
//defination
void get(demo s)
{
	cout<<"enter value of a";
	cin>>s.a;
	cout<<s.a;
}
void main()
{
	clrscr();
	demo d;
	get(d);

	getch();
}