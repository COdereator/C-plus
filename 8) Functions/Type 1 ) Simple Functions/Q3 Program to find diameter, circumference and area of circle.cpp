//Q3 Program to find diameter, circumference and area of circle 

#include<iostream>
using namespace std;

int main()
{
	void diameter();
	void circumference();
	void area();
	diameter();
	circumference();
	area();
	
	return 0;
}
void diameter()
{
	float a , b ;
	cout<<"\n\nEnter radius of Circle: ";
	cin>>a;
	b=2*a;
	cout<<"Diameter is : "<<b<<"\n--------------------------------------------------";
}
void circumference()
{
	float a ,  c;
	cout<<"\n\nEnter radius of Circle : ";
	cin>>a;
	c=2*3.14 * a;
	cout<<"Circumference  is : "<<c<<"\n------------------------------------------------";
}
void area()
{
	float a , c;
	cout<<"\n\nEnter radius of Circle : ";
	cin>>a;
	c=3.14*a*a;
	cout<<"Area is : "<<c;
}
