/*  Function Overloading 
 Q1 To Print Sum 	*/

#include<iostream>
using namespace std;

class base{
	
	private:
		int a , b  , c ,d ;
		
	public:
		void sum()
		{
			cout<<"\nEnter Two Numbers : ";
			cin>>a>>b;
			c=a+b;
			cout<<"\nSum: "<<c;
		}
		void sum(int x , int y)
		{
			d=x+y;
			cout<<"\n Sum : "<<d;
		}
};

int main()
{
	base b;
	b.sum();
	b.sum(10 ,20);
}

