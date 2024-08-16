/* Q2 Program to create class name data Accept one value from data class and print table in same class.
 Make a class name factorial and find factorial of that number*/

#include<iostream>
using namespace std;
 
class data{
	
	protected:
		int num , i ;
		
	public:
		void getdata()
		{
			cout<<"\nEnter a Number: ";
			cin>>num;
		}
		void opr()
		{
			cout<<"\nTable of a Number "<<num;
			for(i=1 ; i<=10 ; i++)
			{
				cout<<"\n"<<num<<" x "<<i<<" = "<<num*i ;
			}
		}
};

class factorial : public data
{
	private:
		int ans ;
		
	public:
		void opr1()
		{
			ans=1;
			for(i=1 ; i<=num ; i++)
			{
				ans=ans*i;
			}	
		}
		void display()
		{
			cout<<"\n\nFactorial = "<<ans;
		}	
};

int main()
{
	factorial f ;
	f.getdata();
	f.opr();
	f.opr1();
	f.display();
	return 0;
}

