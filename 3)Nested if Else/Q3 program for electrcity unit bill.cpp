//Q3 program for electrcity unit bill

#include<iostream>
using namespace std;

int main()
{
	float unit,u1,cash;
	cout<<"\nEnter your Electricity Unit : ";
	cin>>unit;
	if(unit<=50)
	{
		cash=(unit*0.50)+(unit*0.2);
		cout<<"\nAmount of Unit Consumed: "<<cash;
	}
	else if(unit>50 && unit<=150)
	{
		u1=unit-50;
		cash=(u1*0.75)+(50*0.50)+(unit*0.2);
		cout<<"\nAmount of Unit Consumed: "<<cash;
	}
	else if(unit>150 && unit<=300)
	{
		u1=unit-150;
		cash=(u1*1.20)+(100*0.75)+(50*0.50)+(unit*0.2);
		cout<<"\nAmount of Unit Consumed: "<<cash;
	}
	else
	{
		u1=unit-300;
		cash=(u1*1.50)+(150*1.20)+(100*0.75)+(50*0.50)+(unit*0.2);
		cout<<"\nAmount of Unit Consumed: "<<cash;
	}
	
	return 0;
}
