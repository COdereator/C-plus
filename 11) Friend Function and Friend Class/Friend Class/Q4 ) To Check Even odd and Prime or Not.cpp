// Q4 Program to check Prime or not and Even or Odd

#include<iostream>
using namespace std;

class prime ;
class eo ;

class base {
	private:
		int n , i ;
		
	public:
		friend class prime ;
		friend class eo;
		void getdata()
		{
			cout<<"\nEnter a Number : ";
			cin>>n;
		}	
};


class  eo {
	public:
		void check(base );
		
};

void eo::check(base b)
{
	if(b.n%2==0)
	{
		cout<<"\nNumber is Even ";
	}
	else
	{
		cout<<"\nNumber is Odd";
	}
}


class prime{
	
	public:
		void check1(base);

};


void prime::check1(base b)
{
	for(b.i = 2 ; b.i < b.n ; b.i ++)
	{
		if(b.n % b.i==0 )
		{
			cout<<"\n"<<b.n <<" is Not Prime Number ";
			break;
		}
	}
	if(b.n == b.i)
	{
		cout<<"\n"<< b.n <<" is  Prime Number ";
	}
}

int main()
{
	base b;
	b.getdata();
	eo e;
	e.check(b);
	prime p;
	p.check1(b);
	return 0;
}
