/* Q3 program to create class name data . Accept one value from data class 
 Make a class name check and check whether number is even or not and prime number or not */

#include<iostream>
#include<conio.h>
using namespace std;

class data{
	
	protected:
		int num , i  ;
		
	public:
		void getdata()
		{
			cout<<"\nEnter a Number: ";
			cin>>num;
		}
};

class check : public data
{
	public:
		void eo()
		{
			if(num%2==0){
				cout<<"\nNumber is Even "<<endl;
			}
			else {
				cout<<"\nNumber is Odd "<<endl;
			}
		}
		void prime()
		{
			for(i=2 ; i<num ; i++)
			{
				if(num%i==0)
				{
					cout<<"\nNumber is Not Prime " ; break;
				}
			}
			if(num==i)
			{
				cout<<"\nNumber is Prime ";
			}
		}	
};

int main()
{
	check c;
	c.getdata();
	c.eo();
	c.prime();
	return 0;
}

