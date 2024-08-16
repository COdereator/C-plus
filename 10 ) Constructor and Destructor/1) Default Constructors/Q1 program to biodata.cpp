//Q1 Biodata using Constructor

#include<iostream>
using namespace std;

class biodata{
	
	private :
		int age,number,experience;
		char name[255] ;
		char work[255];
		char add[255];
		char email[255];
	
	public:
		biodata();
		void display();	
};
 biodata::biodata()
 {
 	cout<<"\nEnter your Name : ";
 	cin.get(name , 255 , '\n');
 	cout<<"\nEnter Your Age :";
 	cin>>age;
 	cout<<"\nEnter your Mobile Number: ";
 	cin>>number;
 	getchar();
 	cout<<"\nEnter Your Email ID :";
 	cin.get(email , 255 , '\n');
 	getchar();
 	cout<<"\nEnter Your Address :";
 	cin.get(add , 255 , '\n');
 	getchar();
 	cout<<"\nEnter Your Work :";
 	cin.get(work , 255 , '\n');
	getchar();
 	cout<<"\nEnter Your Experience :";
 	cin>>experience;
 	getchar();
 }
 void biodata::display()
 {
 	cout<<"\n\t\tBIO DATA\t\n";
 	cout<<"\nYour Name : "<<name;
 	cout<<"\nYour Age :"<<age;
 	cout<<"\nYour Mobile Number: "<<number;
 	cout<<"\nYour Email ID :"<<email;
 	cout<<"\nYour Address :"<<add;
 	cout<<"\nYour Work :"<<work;
	cout<<"\nYour Experience :"<<experience;	
 }
int main()
{
	biodata call;     // while declaring object function calls automatically
	call.display();
	return 0;
}
