// Q3 To find Sum and Reverse of a Number

#include<iostream>
using namespace std;

class derived ;                //  class decleration 

class base {
	private:
		int num , temp;
		
	public:
		friend class derived ;                 // friend Class 
		void getdata();	
};

void base::getdata()
{
	cout<<"\nEnter a Number : ";
	cin>>temp ;
	num=temp;
}
class derived {
	
	private:
		int d , r , s;
		
	public:
		void sum(base );
		void reverse(base );	
};

void derived::reverse(base b)
{
	r=0;
	while(b.temp!=0)
	{
		d = b.temp % 10 ;
		r = (r*10) + d;
		b.temp = b.temp / 10 ;
	}
	cout<<"\nReverse of a Number : "<< r;
}


void derived::sum(base b)
{
	s=0;
	while(b.num!=0)
	{
		d = b.num % 10 ;
		s = s + d;
		b.num = b.num / 10;
	}
	cout<<"\nSum of a Number : "<< s;
}

int main()
{
	base b;
	b.getdata();
	derived d;
	d.sum(b);
	d.reverse(b);
	return 0;
}
