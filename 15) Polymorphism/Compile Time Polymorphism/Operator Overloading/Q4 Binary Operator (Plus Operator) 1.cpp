// Operator Overloading 
//Q4 Program to Perform Binary Plus operator (+) Overloading and program is complex number

#include<iostream>
using namespace std;
class my{
	
	private:
		float a ,  b ;
		
	public:
		my(){}
		my(float x , float y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"("<<a<<")+("<<b<<")i ";
		}
		friend my operator + (my m1 , my m2)
		{
			my m3;
			m3.a = m1.a + m2.b;
			m3.b = m1.b + m2.b ;
			return m3;
		}	
			
};
int main()
{	
 	my m1 , m2 , m3 ;
 	m1 = my(12.5 ,17.5);
 	m2 = my(13.5 ,10.2);
 	m3=m1+m2;
 	cout<<"\n\nComplex Number 1:        ";
 	m1.display();
 	cout<<"\n\nComplex Number 2:        ";
	m2.display();
	cout<<"\n\nSum of Complex Number:  ";
 	m3.display();
 	return 0;
}
