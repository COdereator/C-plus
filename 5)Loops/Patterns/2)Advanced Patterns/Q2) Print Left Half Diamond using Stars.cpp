//Q2)Program to Print left Half Diamond using Stars

#include<iostream>
using namespace std;

/* OUTPUT
	Enter No  of Rows of Right Half Diamond: 5	
	Right half Diamond Pattern :

	   	    *
	      * *
	    * * *
	  * * * *
	* * * * *
	  * * * *
	    * * *
	      * *
	        *
	        
*/	        
int main()
{
	int rows , i , j , k ;            // K is For Space
	cout<<"\nEnter No  of Rows of Right Half Diamond: ";
	cin>>rows;
	cout<<"\n\nRight half Diamond Pattern : \n\n";

	for(i=1 ; i<=rows ;  i++)
	{
		for(k=rows-1 ; k>=i ; k--)
		{
			cout<<"  ";
		}
		for(j=rows ; j>rows-i ; j--)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	for(i=1 ; i<=rows ; i++)
	{
		for(k=1 ; k<=i ; k++)
		{
			cout<<"  ";
		}
		for(j=i ; j<rows ; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}

	return 0;
}
