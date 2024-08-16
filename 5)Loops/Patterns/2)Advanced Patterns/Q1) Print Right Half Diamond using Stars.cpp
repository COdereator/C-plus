//Q1)Program to Print Right Half Diamond using Stars

/* OUTPUT  
Enter No  of Rows of Right Half Diamond: 6

Right half Diamond Pattern :

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/

#include<iostream>
using namespace std;

int main()
{
	int rows , i , j ;
	cout<<"\nEnter No  of Rows of Right Half Diamond: ";
	cin>>rows;
	cout<<"\n\nRight half Diamond Pattern : \n\n";
	for(i=1 ; i<=rows ; i++)               //for Upper Half Triangle
	{
		for(j=1 ; j<=i ; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i=rows-1 ; i>=1 ; i--)             //For Lower Half Triangle
	{
		for(j=1 ; j<=i ; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
