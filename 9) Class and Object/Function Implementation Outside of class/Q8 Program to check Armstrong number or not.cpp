//Q8 Program to check Armstrong number or not

#include<iostream>
using namespace std;

class my{
	private:
		int num , temp , d , s ;
		
	public:
		void getdata();
		void display();
};
void my::getdata()
{
	cout<<"\nEnter a Number : ";
	cin>>num;
}
void my::display()
{
	temp=num , s=0 ;
	while(num!=0)
	{
		d=num%10;
		s=s+(d*d*d);
		num=num/10;
		}
		if(s==temp)
		{
			cout<<"\nIt is Armstrong Number" ; 
		}
		else
		{
			cout<<"\nIt is not  Armstrong Number" ;
		}
}

int main()
{
	my call;
	call.getdata();
	call.display();
}
