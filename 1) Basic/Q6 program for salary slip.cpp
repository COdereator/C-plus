//Q6 program to find gross salary , hra ,da ta, net

#include<iostream>
using namespace std;
int main()
{
	int hra,da,ta,bs,gs,pf,ecs,ded,net;
	cout<<"Enter the Basic Salary:";
	cin>>bs;
	hra=0.09*bs;
	da=0.07*bs;
	ta=0.04*bs;
	gs=hra+da+ta+bs;
	pf=0.01*gs;
	ecs=0.01*gs;
	ded=pf+ecs;
	net=gs-ded;
	cout<<"\nBasic Salary: "<<bs;
	cout<<"\nHRA 9%:"<<hra;
	cout<<"\nDA 7%: "<<da;
	cout<<"\nTA 4%: "<<ta;
	cout<<"\nGross Salary: "<<gs;
	cout<<"\nPF 1%: "<<pf;
	cout<<"\nECS 1%: "<<ecs;
	cout<<"\nNet Salary: "<<net;
	return 0;
}
