#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f,a1,a2;
	float a3,a4;
	cout<<"Enter Length and breadth of Rectangle:";
	cin>>a>>b;
	cout<<"Enter Side of Square";
	cin>>c;
	cout<<"Enter radius of Circle:";
	cin>>d;
	cout<<"Enter Base and height:";
	cin>>e>>f;
	a1=a*b;
	a2=c*c;
	a3=3.14*d*d;
	a4=0.5*e*f;
	cout<<"\nArea of Rectangle is :"<<a1;
	cout<<"\nArea of Square is :"<<a2;
	cout<<"\nArea of circle is :"<<a3;
	cout<<"\nArea of Triangle is :"<<a4;
	return 0;
}
