/* Q2 Create a Class name data. Accept one value in this class. Create Two class name find1 and find2 and 
find the sum and reverse of a number*/


#include<iostream>
using namespace std;
class data{
	protected:
		int num  , d , r , s;
		
	public:
		void getdata();	 
};
void data::getdata()
{
	cout<<"\nEnter a Number : ";
	cin>>num;
}

class find1 : public data {
	public:
		void sum();
};

void find1::sum()
{
	s=0;
	while(num!=0)
	{
		d=num%10;
		s=s+d;
		num=num/10;
	}
	cout<<"\nSum: "<<s;
}
class find2 : public data {
	public:
		void reverse();
};

void find2::reverse()
{
	r=0;
	while(num!=0)
	{
		d=num%10;
		r=(r*10)+d;
		num=num/10;
	}
	cout<<"\nReverse: "<<r;
}

int main()
{
	find1 f1;
	f1.getdata();
	f1.sum();
	find2 f2;
	f2.getdata();
	f2.reverse();
}
