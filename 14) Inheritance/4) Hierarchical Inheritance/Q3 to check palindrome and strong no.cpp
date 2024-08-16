/* Q3 Create a Class name data. Accept one value in this class. Create Two class name palindrome and Perfect .Check the Number 
is palindrome or not and Perfect or not*/


#include<iostream>
using namespace std;
class data{
	protected:
		int num, d , temp , r , s;
		
	public:
		void getdata()
		{	
			cout<<"\nEnter a Number : ";
			cin>>num;
		}
};


class palindrome : public data {
	public:
		void p()
		{
			r=0 , temp=num ;
			while(temp!=0)
			{
				d=temp%10;
				r=(r*10)+d;
				temp=temp/10;
			}
			if(num=r)
			{
				cout<<"\nNumber is palindrome ";
			}
			else
			{
				cout<<"\nNumber is Not palindrome ";
			}
		}
};

class perfect : public data {
	public:
		void per()
		{
			s=0;
			for(d=1 ; d<num ; d++)	{
				if(num%d==0)	{
					s=s+d;
				}
			}
			if(num==s)	{
				cout<<"\nNumber is Strong Number ";
			}
			else	{
				cout<<"\nNumber is Not Strong Number ";
			}
		}
};

int main()
{
	palindrome obj;
	obj.getdata();
	obj.p();
	perfect obj1;
	obj1.getdata();
	obj1.per();
	return 0;
}
