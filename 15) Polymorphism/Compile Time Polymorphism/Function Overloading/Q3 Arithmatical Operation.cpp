// Q3 Program to Perform Arithmatical Operation

#include<iostream>
using namespace std;

class base{
	
	int  num1 , num2 ;
	public:
		void ar()          						       // FOR SUM 
		{
			cout<<"\nEnter two Numbers : ";
			cin>>num1>>num2;
			cout<<"Sum : "<<num1 + num2 ;
		}
		
		void ar( int a , int b )                       // FOR SUBTRACTION 
		{
			cout<<"\n\nA= "<<a<<"\nB="<<b;
			cout<<"\nSubtraction : "<< a-b ;
		}
		void ar(int x)								   //FOR MULTIPLICATION
		{
			cout<<"\n\nA= "<<x<<"\nB="<<10;
			cout<<"\nMultiplication : "<< x*10 ;
		}
		int ar(int x , int y , int z) 				   // For DIVISION 
		{
			cout<<"\n\nA= "<<x<<"\nB="<<y;
			return x/y ;
		}
		
};
int main()
{
	base b;
	b.ar();
	b.ar(10 , 20);
	b.ar(15);
	cout<<"\nDivision : "<<b.ar(14 , 7 , 0);
}
