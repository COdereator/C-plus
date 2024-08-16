//Q9 Program to find Prime Number in Range

#include<iostream>
using namespace std;

class my{
	private:
		int  a , b ,i ;
		
	public:
		void getdata();
		void display(); 	
};

void my::getdata()
{
	cout<<"\nEnter a First and Last Limit : ";
	cin>>a>>b;
	cout<<"\nPrime Number in a Range: \n\n";
}
void my::display()
{
	while(a<=b)
	{
		for(i=2 ; i<a ; i++)
		{
			if(a%i==0)
			{
				break;
			}
		}
		if(i==a)
		{
			cout<<"\n"<<a;
		}
		a++;
	}
}
int main()
{
	my call;
	call.getdata();
	call.display();
}
