//Q16 Program to Print Inverted Triangle Using Star Hyphen combination

#include<iostream>
using namespace std;
int main()
{
	int i , j , k , n ;
	cout<<"\nEnter Number of Rows: ";
	cin>>n;
	cout<<"\nInverted Triangle Using Star Hyphen combination:\n\n";
	for(i=n-1;i>1;i--)
	{
	    for(k=1;k<n-i;k++)
		{
		    cout<<" ";
	    }
	    cout<<"*";
	    for(j=0;j<=i-1;j++)
		{
           	cout<<"-";
	    }
	    for(j=i;j>1;j++)
		{
	    	cout<<"-";
	    }
	    if(i>0){
		    cout<<"*";
	    }
	    cout<<"\n";
    }
	return 0;
}
