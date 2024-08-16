//Q1 program for marksheet

#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3,s4,s5,s6,t,p;
	cout<<"\nEnter Marks of Physics:";
	cin>>s1;
	cout<<"\nEnter Marks of Chemistry:";
	cin>>s2;
	cout<<"\nEnter Marks of Maths:";
	cin>>s3;
	cout<<"\nEnter Marks of CS-1:";
	cin>>s4;
	cout<<"\nEnter Marks of CS-2:";
	cin>>s5;
	cout<<"\nEnter Marks of English:";
	cin>>s6;
	t=s1+s2+s3+s4+s5+s6;
	p=t/6;
	cout<<"\nTotal: "<<t;
	cout<<"\nPercentage: "<<p<<"%";
	if(p>=85)
	{
		cout<<"\nGrade A+";
	}
	else if(p<85 && p>=75)
	{
		cout<<"\nGrade A";
	}
	else if(p<75 && p>=60)
	{
		cout<<"\nGrade B";
	}
	else if(p<60 && p>=45)
	{
		cout<<"\nGrade C";
	}
	else if(p<45 && p>=35)
	{
		cout<<"\nGrade D";
	}
	else 
	{
		cout<<"\nYou are Fail !!!";
	}
	
return 0;	
}
