//Q3 Program to find diameter, circumference and area of circle 

#include<iostream>
using namespace std;

int main()
{
	float r , a , b ,c ;
	cout<<"\nEnter Radius of Circle : ";
	cin>>r;
	float diameter(float r);
	float circumference(float r);
	float area(float r);
	a=diameter(r);
	cout<<"\nDiameter is : "<<a<<"\n--------------------------------------------------";
	b=circumference(r);
	cout<<"\nCircumference  is : "<<b<<"\n------------------------------------------------";
	c=area(r);
	cout<<"\nArea is : "<<c;
	return 0;
}
float diameter(float r)
{
	float  b ;
	b=2*r;
	return b;
}
float circumference(float r)
{
	float  c;
	c=2*3.14 * r;
	return c;
}
float area(float r)
{
	float  c;
	c=3.14*r*r;
	return c;
}
