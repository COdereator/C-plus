//Q2 Program to find armstong in range

#include<iostream>
using namespace std;

class my{
	
	private:
		int a , b , temp , d  , s ;
		
		public:
			void getdata();
			void display();
};

void my::getdata()
{
	cout<<"\nEnter the First and Last Limit: ";
	cin>>a>>b;
}
void my::display()
{
	while(a<=b)
	{
		temp=a , s=0;
		while(temp!=0)
		{
			d=temp%10;
			s=s+(d*d*d);
			temp=temp/10;
		}
		if(s==a)
		{
			cout<<"\n"<<a;
		}
		a++;
	}
}
int main()
{
	my m;
	m.getdata();
	m.display();
}
