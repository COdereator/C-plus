//Q5 Program to Print Solid Rhombus Left Inclined Pattern

// OUTPUT : 
// Enter the Length of Side: 5
// Solid Rhombus Left Inclined :
//
//  * * * * *
//   * * * * *
//    * * * * *
//     * * * * *
//      * * * * *
     
#include<iostream>
using namespace std;

int main()
{
	int side , i , j , k ;           // K is For Space
	cout<<"\nEnter the Length of Side: ";
	cin>>side;
	cout<<"\n\nSolid Rhombus Left Inclined : \n\n";
	for(i=1  ; i<=side ; i++)
	{
		for(k=1 ; k<=i ; k++)
		{
			cout<<" ";
		}
		for(j=1 ; j<=side ; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}
