//Q5 program for swapping between 2 numbers acording to the condition

#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e;
	cout<<"Enter two Numbers:";
	cin>>a>>b;
	d=a;
	e=b;
	//using 3rd variable
	cout<<"\n\n****Using 3rd variable*****";
	cout<<"\nBefore Swapping:";
	cout<<"\nA = "<<a;
	cout<<"\nB= "<<b;
	c=a;
	a=b;
	b=c;
	cout<<"\nAfter Swapping:";
	cout<<"\nA = "<<a;
	cout<<"\nB= "<<b;
	
	//Not Using 3rd variable	
	cout<<"\n";
	cout<<"\n*********Not Using 3rd variable***************";
	cout<<"\nBefore Swapping:";
	cout<<"\nA = "<<d;
	cout<<"\nB= "<<e;
	d=d+e;
	e=d-e;
	d=d-e;
	cout<<"\nAfter Swapping:";
	cout<<"\nA = "<<d;
	cout<<"\nB= "<<e;	

	return 0;
}
