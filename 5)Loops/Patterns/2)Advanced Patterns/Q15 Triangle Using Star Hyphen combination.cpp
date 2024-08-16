//Q15 Program to Print Triangle Using Star Hyphen combination

//	Output:
//	Enter Number of Rows: 5
//	Triangle Using Star Hyphen combination:
//
//	    *
//	   *-*
//	  *---*
//	 *-----*	
//	*-------*

#include<iostream>
using namespace std;
int main()
{
	int i , j , k , n ;
	cout<<"\nEnter Number of Rows: ";
	cin>>n;
	cout<<"\nTriangle Using Star Hyphen combination:\n\n";
	for(i=0 ; i<n ; i++)
	{
	    for(k=1 ; k<n-i ; k++)
		{
		    cout<<" ";
	    }
	    cout<<"*";
	    for(j=0 ; j<=i-1 ; j++)
		{
           	cout<<"-";
	    }
	    for(j=1 ; j<i ; j++)
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
