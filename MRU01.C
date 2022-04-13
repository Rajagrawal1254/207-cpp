#include<iostream.h>
#include<conio.h>
main()
{
	int ano, result=0,n,r;

	clrscr();

	cout<<"enter actual number=";
	cin>>ano;
	n=ano;

	while(n>0)
	{
		r=n%10;
		result=(r*r*r)+result;
		n=n/10;
	}
	if(n==result)
	{
	  cout<<"no is amstrong";
	}
	else
	{
	  cout<<"no is not amstrong";
	}
	getch();
}
