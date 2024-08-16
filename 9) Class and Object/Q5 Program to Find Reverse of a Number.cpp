//Q5 Program to Find Reverse of a Number

#include<iostream>
using namespace std;

class my{
	private:
		int num , d , rev ;
	
	public:
		void getdata()
		{
			cout<<"\nEnter a Number: ";
			cin>>num;
		}
		void opr()
		{
			rev=0;
			while(num!=0)
			{
				d=num%10;
				rev=(rev*10)+d;
				num=num/10;
			}
		}
		void display()
		{
			cout<<"\nReverse of a Number: "<<rev;
		}
};


int main()
{
	my call;
	call.getdata();
	call.opr();
	call.display();
}
