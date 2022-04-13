#include<iostream.h>
#include<conio.h>
main()
{
	int no,rem,rev=0,p;

	clrscr();
	cout<<"enter no";
	cin>>no;
	p=no;
	while(no>0)
	{
	rem=no%10;
	rev=(rev*10)+rem;
	no=no/10;
	}
	if(rev==p)
	{
       cout<<" no is palandrome";
	}
	else
	{
	cout<<"no is not palandrome";
	}
	cout<<"reverse no is ="<<rev;
	getch();

}