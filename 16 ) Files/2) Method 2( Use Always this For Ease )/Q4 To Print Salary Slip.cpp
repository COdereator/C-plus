// Q4 Program To Perform Salary Slip 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Employee{
	private:
		char Name[255];
		long Salary , Gross , Net , Id ;
		float hra , da , ta , pf , ecs , ded ;
		
	public:
		void details();
		void Infile();
		void Outfile();	
};
void Employee::details()
{
	cout<<"Enter Name of Employee : ";
	cin.get(Name , 255 , '\n');

	cout<<"Enter Id Number : ";
	cin>>Id;
	cin.ignore();
	cout<<"Enter Basic Salary : ";
	cin>>Salary;
	cin.ignore();
	hra=0.05*Salary ;
	da=0.03*Salary ;
	ta=0.07*Salary ;
	Gross = Salary + hra , da , ta ;
	pf=0.02*Gross ;
	ecs=0.01*Gross ;
	ded=pf+ecs;
	Net = Gross - ded ;
}
void Employee::Infile()
{
	ofstream write ;
	write.open("Employee Salary.txt");
	write<<"\n\n=============================";
	write<<"\nName 		: "<<Name;
	write<<"\nId Number 	: "<<Id;
	write<<"\n=============================";
	write<<"\nHra 5%    	: "<<hra;
	write<<"\nDa 3%     	: "<<da;
	write<<"\nTa 7% 		: "<<ta;
	write<<"\n=============================";
	write<<"\nGross Salary 	: "<<Gross;
	write<<"\n=============================";
	write<<"\nPF 2% 		: "<<pf;
	write<<"\nECS 1% 		: "<<ecs;
	write<<"\n=============================";
	write<<"\nNet Salary 	: "<<Net;
	write.close();
}
void Employee::Outfile()
{
	char str;
	ifstream read ;
	read.open("Employee Salary.txt");
	cout<<"\nReading From File : ";
	while(read.eof()==0)
	{
			str=read.get();
			cout<<str;
	}
	read.close();
}
int main()
{
	Employee obj;

		obj.details();
		obj.Infile();
		obj.Outfile();

	return 0;
}
