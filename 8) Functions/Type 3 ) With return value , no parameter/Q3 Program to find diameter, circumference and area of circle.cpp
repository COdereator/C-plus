//Q3 Program to find diameter, circumference and area of circle 

#include<iostream>
using namespace std;

int main()
{
	int diameter();
	int circumference();
	int area();
	diameter();
	circumference();
	area();
	
	return 0;
}
int diameter()
{
	float a , b ;
	cout<<"\n\nEnter radius of Circle: ";
	cin>>a;
	b=2*a;
	cout<<"Diameter is : "<<b<<"\n--------------------------------------------------";
	return 0;
}
int circumference()
{
	float a ,  c;
	cout<<"\n\nEnter radius of Circle : ";
	cin>>a;
	c=2*3.14 * a;
	cout<<"Circumference  is : "<<c<<"\n------------------------------------------------";
	return 0;
}
int area()
{
	float a , c;
	cout<<"\n\nEnter radius of Circle : ";
	cin>>a;
	c=3.14*a*a;
	cout<<"Area is : "<<c;
	return 0;
}
