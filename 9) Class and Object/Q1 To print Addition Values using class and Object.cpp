//Q1 1st Program using class and object

#include<iostream>
using namespace std; 

class a{
	private:
		int a , b ;
		
	public:
		void getdata()
		{
			cout<<"\nEnter two values: ";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"\nAddition : "<<a+b;
		}
};

int main()
{
	a call;
	call.getdata();
	call.display();
	return 0;
}
