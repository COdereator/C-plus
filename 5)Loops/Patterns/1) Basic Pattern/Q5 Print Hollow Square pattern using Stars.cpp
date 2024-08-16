//Q5 Program to Print Hollow Square pattern using Stars

#include<iostream>
using namespace std;

int main()
{
	int i, j , side ;
	cout<<"\nEnter No of Rows Equal to Columns: ";
	cin>>side;
	cout<<"\nHollow Square Pattern using Stars"<<endl;
	for(i=1 ; i<=side ; i++)
	{	
		for(j=1 ; j<=side ;j++)
		{
			if(i==1 || i==side || j==1 || j==side)
			{
				cout<<j<<" ";    //here in <<"* "; this star along with space is given so count the space and then according write the code
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
