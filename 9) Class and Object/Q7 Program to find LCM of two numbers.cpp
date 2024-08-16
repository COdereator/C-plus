//Q7 Program to find LCM of two numbers

#include<iostream>
using namespace std;

class my{
	
	private:
		int a , b , i , lcm ;
		 
	public:
		void getdata()
		{
			cout<<"\nEnter Two Numbers : ";
			cin>>a>>b;
		}
		void opr()
		{
			for(i=2 ; i<a*b ; i++)
			{
				if(i%a==0 && i%b==0)
				{
					lcm=i;
					break;
				}
			}
		}
		void display()
		{
			cout<<"\nLCM is "<<lcm;
		}
};

int main()
{
	my call;
	call.getdata();
	call.opr();
	call.display();
	return 0;
}
