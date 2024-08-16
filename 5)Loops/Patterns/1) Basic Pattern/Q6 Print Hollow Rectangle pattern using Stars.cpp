//Q6 Program to Print Hollow Rectangle pattern using Stars

#include<iostream>
using namespace std;

int main()
{
	int i, j , rows , columns;
	cout<<"\nEnter the rows and columns of Rectangle : ";
	cin>>rows>>columns;
	cout<<"\nRectangle Pattern using Stars "<<endl;
	for(i=1 ; i<=columns  ; i++)        
	{
		for(j=1 ; j<=rows ;j++)        
		{
			if(i==1 || i==columns || j==1 || j==rows)
			{
				cout<<"* ";        //here in <<"* "; this star along with space is given so count the space and then according write the code
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
