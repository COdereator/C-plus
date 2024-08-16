//Q17 program to find bonus in  a range

#include<iostream>
using namespace std;
int main()
{
	int bs,bonus,rs;
	cout<<"Enter the Basic Salary:";
	cin>>bs;

	if(bs<=25000)
	{
		rs=0.05*bs;
		cout<<"\nBonus 5% \nBonus in rupees:"<<rs;
	}
	else
	{
		rs=0.12*bs;
		cout<<"\nBonus is 12% \nBonus in rupees:"<<rs;
	}
	
	return 0;
 } 
