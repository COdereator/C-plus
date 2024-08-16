//Q10 Program to find palindrome number in a range 

#include<iostream>
using namespace std;

class my{
	private:
		int  a , b , temp , rev , d ;
		
	public:
		void getdata()
		{
			cout<<"\nEnter a First and Last Limit : ";
			cin>>a>>b;
			cout<<"\nPalindrome Number in a Range: \n\n";
		}
		void display()
		{
			while(a<=b)
			{
				temp=a;
				rev=0;
				while(temp!=0)
				{
					d=temp%10;
					rev=rev*10+d;
					temp=temp/10;
				}
				if(rev==a)
				{
					cout<<"\n"<<a;
				}
				a++;
			}
		}	
};

int main()
{
	my call;
	call.getdata();
	call.display();
}
