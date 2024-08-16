//Q16 Program to Find Palindrome Number in a range

#include<iostream>
using namespace std ;

int main()
{
	long f,n,l,d,r,check;
	cout<<"Enter The First Limit : ";
	cin>>f;
	cout<<"Enter The Last Limit : ";
	cin>>l;
	while(f<=l)
	{
		check=f;
		d=0;
		r=0;
		while(f!=0)
		{
			d=f%10;
			r=(r*10)+d;
			f=f/10;
		}
		if(r==check)
		{
			cout<<check<<endl;
		}
		f++;
	}
	return 0;
}
