/* Q3 Program to Perform Swapping between 2 Numbers using Copy Constructor */

#include<iostream>
using namespace std;

class swapss{
	
	private:
		int a , b ;
	
	public: 
		swapss(int x , int y );
		swapss(swapss &obj);
		void opr();
};

swapss::swapss(int x , int y)
{
	a=x ; b=y;
	cout<<"\n Orginal Values :\nA= "<<a<<"\nB= "<<b<<endl;
}
swapss::swapss(swapss &obj)
{
	a=obj.a;
	b=obj.b;
}
void swapss::opr()
{
	a=a+b ; 
	b=a-b ; 
	a=a-b;
	cout<<"\n A= "<<a;
	cout<<"\n B= "<<b;
}

int main()
{
	int a , b ;
	cout<<"\nEnter Two Numbers : ";
	cin>>a>>b;
	swapss s(a , b);
	swapss s1=s;
	cout<<"\nSwap in First Constructor : ";
	s.opr();
	cout<<"\n\nSwap in Copy Constructor : \n  ";
	s1.opr();
}
