/* Q1)Write a program to print the names of students by creating a Student class. If no name is passed
 while creating an object of the Student class, then the name should be "Unknown",
 otherwise the name should be equal to the String value passed while creating the object of the Student class. */

#include<iostream>
using namespace std;

class student {
	public:
		student();
		student(char name[100]);
};

student::student()
{
	cout<<"\n Name: Unknown ";
}
student::student(char name[100])
{
	cout<<"\n "<<name ;
}
int main()
{
	int i , n ; 
	char name[100][255];
	cout<<"\nEnter Number of Names u want to Enter : ";
	cin>>n;
	cin.ignore();
	for(i=1 ; i<=n ; i++)
	{
		cout<<"\nEnter the name : ";
		cin.get(name[i] , 255 , '\n');
		cin.ignore();
	 } 
	 student s("Aayush");  // or student s;
	 for(i=1 ; i<=n ; i++)
	 {
	 	s=student(name[i]);
	 }
}
