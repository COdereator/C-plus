/* Q3 Create a class name Data .Accept 1 value in the class . Create another class name data1 Accept 1 
value in the class .Create another class name math. find gcd and lcm of two values taken in this math class */

#include<iostream>
using namespace std ;

class data{
	
	protected:
		int a ;
		
	public:
		void getdata();
};


void data::getdata()
{
	cout<<"\nEnter a  Number: ";
	cin>>a;
}

class data1{
	protected:
		int b;
	
	public:
		void getdata1();
};

void data1::getdata1()
{
	cout<<"\nEnter a Number : ";
	cin>>b;
}

class math : public data , public data1
{
	private:
		int m , temp  , c , d ;
	public:
		void gcd();
		void lcm();
		void display();
};

void math::gcd()
{
	c=a; d=b;
	while(c!=d)
	{
		if(c>d) {
			c=c-d;
		}
		if(c<d) {
			d=d-c;
		}
	}
}

void math::lcm()
{
	for(m=2 ; m<=a*b ; m++)
	{
		if(m%a==0 && m%b==0)
		{
			temp=m;
			break;
		}
	}
}
void math::display()
{
	cout<<"\nG.C.D = "<< c ;
	cout<<"\nL.C.M = "<<temp;
}
int main()
{
	math m ;
	m.getdata();
	m.getdata1();
	m.gcd();
	m.lcm();
	m.display();
	return 0;
}

