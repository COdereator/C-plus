// Q5 Program to Perform Armstrong Number and Strong Number using friend function and friend class

#include<iostream>
using namespace std;
class armstrong ;
class strong;

class base{
		
	private:
		int n , temp1 , i , d , arm , str;
	public:
	friend class armstrong ;
	friend	class strong;

		void getdata(){
			cout<<"\nEnter a Number : ";
			cin>>n;
			temp1=n;
		}
};

class armstrong{
	
	public:
		void check(base);
};

void armstrong::check(base b)
{
	while(b.temp1!=0)
	{
		b. d = b. temp1 % 10 ;
		b.arm = b.arm+(b.d * b.d * b.d);
		b.temp1 = b.temp1/10;
	}
	if(b.arm == b.n )
	{
		cout<<"\n\nNumber is Armstrong ";
	}
	else
	{
		cout<<"\n\nNumber is not Armstrong ";
	}
}

class strong{
	
	public:
		void check1(base);
};

void strong::check1(base b)
{
	for(b.i=1 ; b.i< b.n ; b.i++)
	{
		if(b.n% b.i ==0)
		{
			b.str= b.str + b.i;
		}
	}
	if(b.str == b.n)
	{
		cout<<"\n\nNumber is Strong Number ";
	}
	else
	{
		cout<<"\n\nNumber is Not Strong ";
	}
		
}
int main()
{
	base b;
	b.getdata();
	armstrong a;
	a.check(b);
	strong s;
	s.check1(b);
	return 0;
}
