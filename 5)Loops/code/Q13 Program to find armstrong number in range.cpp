//Q14 Program to find armstrong number in  a range 

#include<iostream>
using namespace std;

int main()
{
	int a,b,s,d,n;
	cout<<"Enter the First and Last Limit : ";
	cin>>a>>b;
	cout<<"\nArmStrong Number in range "<<a<<" to "<<b <<" are: \n";
	while(a<=b)
	{
		n=a;
		d=0;
		s=0;
		while(n!=0)
		{
		    d=n%10;
		    s=s+(d*d*d);
		    n=n/10;
		}
		if(s==a)
	    {
		    cout<<a<<endl;
	    }
	    a++;
    }
	return 0;
}
