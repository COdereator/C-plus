/* Program With Files (Method 2)   */
//Q1 Program to Append File 
#include<iostream>
#include<fstream>
using namespace std;


 int main()
{
	int i , std , roll ;
	string name;

	cout<<"\nEnter Your Name : ";				
	getline(cin , name);
	cout<<"\nEnter your Standard and Roll No : " ;
	cin>>std>>roll;
	ofstream write;
	write.open("File3.txt ");
	write<<"Name : "<<name<<endl;
	write<<"Std : "<<std<<"\nRoll : "<<roll;
	write.close();
	return 0;
} 


