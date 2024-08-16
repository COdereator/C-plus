/* Q2 Program to create Class name data Accept one value from data class . Create another class name data1 accept
one value from data1 class .Create a class name opr and perform swapping and comparison between 2 numbers*/

#include<iostream>
using namespace std;
 
class data{
	
	protected:
		int a ;
		
	public:
		void getdata();
};

void data::getdata()
{
	cout<<"\nEnter a Number: ";
	cin>>a;
}
class data1{
	protected:
		int b;
	
	public:
		void getdata1();
};

void data1::getdata1()
{
	cout<<"\nEnter a Number : ";
	cin>>b;
}

class opr: public data , public data1
{
	private:
		int c , d , e ,f ;
	public:
		void comparison();
		void swap();
};

void opr::comparison()
{
	if(a>b)
	{
		cout<<a<<" is greater than "<<b;
	}
	else {
		cout<<b<<" is greater than "<<a;
	}
}

void opr::swap()
{
	cout<<"\nBefore Swapping : ";
	cout<<"\nA= "<<a;
	cout<<"\nB= "<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter Swapping : ";
	cout<<"\nA= "<<a;
	cout<<"\nB= "<<b;
}
int main()
{
	opr m ;
	m.getdata();
	m.getdata1();
	m.comparison();
	m.swap();
	system("COLOR 3");        //Optional
	return 0;
}

