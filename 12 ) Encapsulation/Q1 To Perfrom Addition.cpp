// Q1 To print Addition of Two Numbers

#include<iostream>
using namespace std;

class base{
	
	int a , b ,c ;
	public:
		void getdata()
		{
			cout<<"\nEnter Two Numbers: ";
			cin>>a>>b;
			c=a+b;
			cout<<"\n Addition : "<<c;
		}
		
};

int main()
{
	base b;
	b.getdata();
}
