//Q4 Program to Print Solid Rhombus Right Inclined Pattern

// OUTPUT: 
//Enter the length of Side : 5
//Solid Rhombus Right Inclined :
//
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *

#include<iostream>
using namespace std;

int main()
{
	int side , i , j , k ;
	cout<<"\nEnter the length of Side : ";
	cin>>side;
	cout<<"\n\nSolid Rhombus Right Inclined: \n\n";
	for(i=side-1 ; i>=0 ; i--)
	{
		for(k=1 ; k<=i ; k++)
		{
			cout<<" ";
		}
		for(j=1 ; j<=side ; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0; 
}
