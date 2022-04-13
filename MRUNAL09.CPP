#include<iostream.h>
#include<conio.h>
main()
{
	int no,t1,t2,next_no;
	clrscr();
	t1=0;
	t2=1;
	cout<<"enter number"<<endl;
	cin>>no;
	cout<<"........output.........";

	cout<<t1<<endl;
	cout<<t2<<endl;
	next_no=t1+t2;


	while(next_no<no)
	{
	cout<<next_no<<endl;
	t1=t2;
	t2=next_no;
	next_no=t1+t2;
	}

	getch();


}