//Q2 program for salary slip

#include<iostream>
using namespace std;

int main()
{
	int bs,hra,da,ta,gs,pf,ecs,net;
	cout<<"Enter Basic Salary: ";
	cin>>bs;
	if(bs<=10000)
	{
		hra=0.15*bs;
		da=0.20*bs;
		ta=0.25*bs;
		gs=bs+hra,da,ta;
		pf=0.01*gs;
		ecs=0.02*gs;
		net=gs-(pf+ecs);
		cout<<"\nHra 15%:"<<hra;
		cout<<"\nDa 20%: "<<da;
		cout<<"\nTa 25% : "<<ta;
		cout<<"\nGross Salary : "<<gs;
		cout<<"\nPf 1%: "<<pf;
		cout<<"\nEcs 2%: "<<ecs;
		cout<<"\nNet Salary : "<<net;
	}
	else if(bs>10000 && bs<=20000)
	{
		hra=0.25*bs;
		da=0.3*bs;
		ta=0.35*bs;
		gs=bs+hra,da,ta;
		pf=0.01*gs;
		ecs=0.02*gs;
		net=gs-(pf+ecs);
		cout<<"\nHra 25% :"<<hra;
		cout<<"\nDa 30% : "<<da;
		cout<<"\nTa 35% : "<<ta;
		cout<<"\nGross Salary : "<<gs;
		cout<<"\nPf 1%: "<<pf;
		cout<<"\nEcs 2% : "<<ecs;
		cout<<"\nNet Salary : "<<net;
	
	}
	else
	{
		hra=0.35*bs;
		da=0.4*bs;
		ta=0.45*bs;
		gs=bs+hra,da,ta;
		pf=0.01*gs;
		ecs=0.02*gs;
		net=gs-(pf+ecs);
		cout<<"\nHra 35% :"<<hra;
		cout<<"\nDa 40% : "<<da;
		cout<<"\nTa 45% : "<<ta;
		cout<<"\nGross Salary : "<<gs;
		cout<<"\nPf 1% : "<<pf;
		cout<<"\nEcs 2% : "<<ecs;
		cout<<"\nNet Salary : "<<net;
	}
	
	
	return 0;
}
