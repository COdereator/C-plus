/* Q2 Create a class name data . Accept one value in this class . Create a another class name variables . Accept the
respective variables require to check armstrong no or not . create a class name check , check the number is
 armstrong or not */

#include<iostream>
using namespace std;
class data{
	protected :
		int num;
		
	public :
		void getdata();	
};

void data::getdata()
{
	cout<<"\nEnter a Number : ";
	cin>>num;
}

class variables : public data {
	
	protected: 
		int d , r , temp ;
};

class check : public variables {
	public:
		void display();
};

void check::display()
{
	temp=num;  r=0;
	while(temp!=0)
	{
		d=temp%10;
		r=r+(d*d*d);
		temp=temp/10;
	}
	if(r==num)
	{
		cout<<"\nNumber is Armstrong Number ";
	}
	else
	{
		cout<<"\nNumber is not Armstrong Number ";
	}
}

int main()
{
	check c;
	c.getdata();
	c.display();
}
