//Q11 Program to Print Inverted Full Pyramid Pattern Using Stars

#include<iostream>
using namespace std;

/* OUTPUT: 
 	Enter Number of Rows: 5
	Inverted Full Pyramid Pattern Using Stars :

	* * * * *
	 * * * *
	  * * *
	   * *
        *
 */   
int main()
{
	int rows , i , j  , k ;    // k is for Space
	cout<<"\nEnter Number of Rows: ";
	cin>>rows;
	cout<<"\n\nInverted Full Pyramid Pattern Using Stars : \n\n";
	for(i=rows ; i>=0 ; i--)
	{
		for(k=i ; k<rows ; k++)
		{
			cout<<" ";
		}
		for(j=1 ; j<=i ; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
