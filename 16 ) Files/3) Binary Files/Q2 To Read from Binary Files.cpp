#include<iostream>
#include<fstream>
#include<stdio.h>
#include<iomanip>
#include<string.h>
using namespace std;



//class student
//{
//   int rollno;
//   char name[20];
//   char branch[3];
//   float marks;
//   char grade;
//
//   public:
//      void getdata()
//      {
//         cout<<"Rollno: ";
//         cin>>rollno;
//         cout<<"Name: ";
//         cin>>name;
//         cout<<"Branch: ";
//         cin>>branch;
//         cout<<"Marks: ";
//         cin>>marks;
//
//         if(marks>=75)
//         {
//            grade = 'A';
//         }
//         else if(marks>=60)
//         {
//            grade = 'B';
//         }
//         else if(marks>=50)
//         {
//            grade = 'C';
//         }
//         else if(marks>=40)
//         {
//            grade = 'D';
//         }
//         else
//         {
//            grade = 'F';
//         }
//      }
//
//      void putdata()
//      {
//         cout<<name<<", rollno "<<rollno<<" has ";
//         cout<<marks<<"% marks and "<<grade<<" grade."<<"\n";
//      }
//
//      int getrno()
//      {
//         return rollno;
//      }
//}stud1;
//
//int main()
//{
//   //clrscr();
//
//   ofstream fout("marks.dat", ios::app);
//   char ans='y';
//   while(ans=='y' || ans=='Y')
//   {
//      stud1.getdata();
//      fout.write((char *)&stud1, sizeof(stud1));
//      cout<<"Data appended in the file successfully..!!\n";
//      cout<<"\nWant to enter more ? (y/n)..";
//      cin>>ans;
//   }
//
//   fout.close();
//   cout<<"\nPress any key to exit...\n";
//   //getch();
//}
class st
{
	public:
		int roll , grno;
		char name[20];
		void show()
		{
			
			cout<<setw(8)<<name<<
			setw(10)<<roll<<
			setw(6)<<grno<<endl;
		}
};
st obj;				// Global Decleration of Object of Class

void output()
{
	ifstream fobj;
	fobj.open("practice2.txt", ios::binary | ios::in);
	obj.show();
	while(fobj.eof()==0)
	{
		fobj.read((char *)&obj , sizeof(st));
		
	}
}
int main()
{
		int i;
		cout<<"\n    Name :"<<setw(10)<<"Roll"<<setw(6)<<"GRNO"<<endl;
		cout<<"\n-------------------------------------------------\n";
		output();
		return 0;
}
