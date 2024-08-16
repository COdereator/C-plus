//Q3 Program to Print Fibbonacci Series

#include<iostream>
using namespace std; 

class a{
	private:
		int a , f0 , f1 , fib , count ;
		
	public:
		void getdata()
		{
			cout<<"\nEnter the last Limit : ";
			cin>>a;
		}
		void display()
		{
			count=1;
			f0=0 , f1=1;
			cout<<f0<<" "<<f1<<" ";
			while(count<=a)
			{
				fib=f0+f1;
				cout<<fib<<" ";
				f0=f1;
				f1=fib;
				count++;
			}
		}
};

int main()
{
	a call;
	call.getdata();
	call.display();
	return 0;
}


