//PROGRAM FOR FACTORIAL NO

#include<iostream.h>
#include<conio.h>
main()
{
	int no,i;
	unsigned long long fact=1;
	clrscr();
	cout<<"Enter No= ";
	cin>>no;
	if(no==0)
	{
	 cout<<fact;
	}
	else
	{
		for (i=1;i<=no;i++)
		{
		fact*=i;

	     }
	     cout<<"factorial of "<<no<<" is "<<fact;
	}
	getch();
}