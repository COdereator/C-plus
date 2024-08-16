//Q3 Program to find diameter, circumference and area of circle 

#include<iostream>
using namespace std;

int main()
{
	float a ;
	cout<<"\n\nEnter radius of Circle : ";
	cin>>a;
	void diameter(float r);
	void circumference(float r);
	void area(float r);
	diameter(a);
	circumference(a);
	area(a);
	
	return 0;
}
void diameter(float r)
{
	float d;
	d=2*a;
	cout<<"Diameter is : "<<d<<"\n--------------------------------------------------";
}
void circumference(float r)
{
	float   c;
	c=2*3.14 * r;
	cout<<"Circumference  is : "<<c<<"\n------------------------------------------------";
}
void area(float r)
{
	float  a;
	a=3.14*r*r;
	cout<<"Area is : "<<a;
}
