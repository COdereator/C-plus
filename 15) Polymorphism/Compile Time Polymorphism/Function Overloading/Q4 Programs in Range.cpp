// Q4 Program in Ranges  ( ArmStrong Number and Perfect Number in Range )

#include<iostream>
using namespace std;

class base{
	
	private:
		int a , b  ,arm , d  , temp , i ;
		
	public:
		void range(int a , int b)
		{
			cout<<"\nArmStrong Number \n\n" ;
		    while(a<=b)
		    {
		    	arm=0;
		    	for(temp=a ; temp!=0 ; temp=temp/10)
		    	{
		    		d=temp%10;
		    		arm=arm+(d*d*d);
				}
				if(arm==a)
				{
					cout<<"\n"<<a;
				}
		    	a++;
			}
		}
		void range(int x , int y , int z)
		{
			cout<<"\n\n*****Perfect Numbers in a Range **********\n";
		    while(x<=y)
		    {
		    	d=0;
		    	for(i=1 ; i<x ; i++)
		    	{
		    		if(x%i==0)
		    		{
		    			d=d+i;
					}
				}
				if(d==x)
				{
					cout<<"\n"<<x;
				}
		    	x++;
			}
		}
};

int main()
{
	int a , c;
	cout<<"\nEnter Range: ";
	cin>>a>>c;
	base b;
	b.range(a , c);
	b.range(a, c , 0);             // For Overloading I am using 0 as a Parameter but it is not used in Process
	return 0;
}

