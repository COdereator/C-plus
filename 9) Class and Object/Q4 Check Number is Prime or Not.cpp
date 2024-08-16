//Q4 Program to Check Number is Prime or Not

#include<iostream>
using namespace std; 

class my{
	private:
		int a , i ;
		
	public:
		void getdata()
		{
			cout<<"\nEnter a Number: ";
			cin>>a;
		}
		void display()
		{
			for(i=2 ; i<a ; i++)
			{
				if(a%i==0)
				{
					cout<<"\nNumber is Not Prime";
					break;
				}
			}
			if(a==i)
			{
				cout<<"\nNumber is Prime";
			}
		}
};

int main()
{
	my call;
	call.getdata();
	call.display();
	return 0;
}
