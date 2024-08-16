//Q7 program to make Calculator

#include<iostream>
using namespace std;

int main()
{
	int a,b,c,opt;
	cout<<"Enter two Numbers: ";
	cin>>a>>b;
	cout<<"\n1. Addition \n2.Subtraction \n3.Multiplication \n4.Division(Quotient) \n5.Division (Modulo)";
	cout<<"\nEnter your Option:";
	cin>>opt;
	switch(opt)
	{
		case 1:
			cout<<"\nAddition : "<<a+b;
			break;
			
		case 2:
			cout<<"\nSubtraction : "<<a-b;
			break;
			
		case 3:
			cout<<"\nMultiplication : "<<a*b;
			break;
			
		case 4:
			cout<<"\nDivision(Quotient) : "<<a/b;
			break;
			
		case 5:
			 c=a%b;
		    cout<<"\nDivision (Modulo): "<<c;
			break;
				
			
		default :
			cout<<"\nWrong Input";
			break;
		
		
		
	}
	return 0;
}
