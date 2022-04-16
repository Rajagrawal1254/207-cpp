#include<iostream.h>
#include<conio.h>
main()
{
	int no,rem,rev=0;

	clrscr();
	cout<<"enter no";
	cin>>no;

	while(no>0)
	{
	rem=no%10;
	rev=(rev*10)+rem;
	no=no/10;
	}
	cout<<"reverse no is ="<<rev;
	getch();

}
