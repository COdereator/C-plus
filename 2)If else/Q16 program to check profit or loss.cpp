//Q16 program to check profit or loss

#include<iostream>
using namespace std;
int main()
{
	int cs,ss,pf,ls;
	cout<<"Enter the Cost Price:";
	cin>>cs;
	cout<<"Enter the Selling Price:";
	cin>>ss;
	if(ss>cs)
	{
		cout<<"\nIts profit \nProfit in rupees:"<<ss-cs;
	}
	else
	{
		cout<<"\nIts Loss \nLoss in rupees:"<<cs-ss;
	}
	
	return 0;
 } 
