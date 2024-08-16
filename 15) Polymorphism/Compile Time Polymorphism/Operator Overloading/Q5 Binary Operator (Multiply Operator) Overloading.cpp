// Operator Overloading 
//Q5 Program to Perform Binary Multlipication operator (*) Overloading 

#include<iostream>
using namespace std;
class my{
	
	private:
		float a  ;
		
	public:
		my(){}
		my(float x )
		{
			a=x;
		}
		void display()
		{
			cout<<a;
		}
		friend my operator * (my m1 , my m2)
		{
			my m3;
			m3.a = m1.a * m2.a;
			return m3;
		}	
			
};
int main()
{	
	int a , b ;
	cout<<"\nEnter Two Numbers : ";
	cin>>a>>b;
 	my m1 , m2 , m3 ;
 	m1 = my(a);
 	m2 = my(b);
 	m3=m1*m2;
	cout<<"\n\nProduct:  ";
 	m3.display();
 	return 0;
}
