	//Project to Store Classes Information  
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<stdlib.h>

using namespace std;
class hello
{
	public:
		char name1[255], gen1, div;
		int i  , std,  grno,  sstd , sroll  ,count ;
		float fees;
		void show1()
		{
			cout<<"\n1::Add Records   ";
			cout<<"\n2::Search Records";
			cout<<"\n3::Modify Records";
			cout<<"\n4::List Records  ";
			cout<<"\n5::Delete Records";
			cout<<"\n6::Exit ";
		}
		void getdata1()
		{
			getchar();
			cout<<"Enter Name : " ; 		gets(name1);
			cout<<"Enter GrNo : " ; 		cin>>grno;
			cout<<"Enter Std  : " ; 		cin>>std;
			cout<<"Enter Div  : " ; 		cin>>div;
			cout<<"Enter gender  : " ; 		cin>>gen1;
			cout<<"Enter Fees  : " ; 		cin>>fees;
		//getchar();
		}
		void putdata1()
		{
			cout<<endl<<setw(16)<<name1<<setw(8)<<grno<<
			setw(6)<<std<<setw(6)<<div<<setw(6)<<gen1<<setw(12)<<fees<<endl;
		}	
		int retgrno()
		{
			return grno;
		}
};

void input_records1()
{
	
	ofstream outfile;
	outfile.open("project2student.dat", ios::binary | ios::app);
	hello h1;
	h1.getdata1();
	
	outfile.write((char *)&h1 , sizeof(h1));
	outfile.close();
	
}
void search1(int n)
{
	int flag=0;
	ifstream infile;
	infile.open("project2student.dat", ios::binary );
	hello h1;
	while(infile.read((char *)&h1 , sizeof(h1)))
	{
		if(h1.retgrno()==n)
		{
			cout<<"\n\n  \t  Name"<<"\t   GrNo"<<"    Std"<<"   Div"<<"   Gender"<<"     Fees";
			h1.putdata1();  flag=1;	
		}
	}
	if(flag==0)
	{
		cout<<"\nSearch Not Found";
	}
	infile.close();
	
}
void modify1(int n )
{
	fstream file;
	int flag =0;
	file.open("project2student.dat", ios::in | ios::out);
	hello h1;
	while(file.read((char *)&h1 , sizeof(h1)))
	{
		if(h1.retgrno()==n)
		{
			flag=1;
			cout<<"\nEnter New Details of Student : ";
			h1.getdata1();
			int pos;
			pos = (-1) * sizeof(h1);
			file.seekp(pos , ios::cur);
			file.write((char *)&h1 , sizeof(h1));
		}
	}
	if(flag==0)
	{
		cout<<"\nRecord Not Found";
	}
	file.close();
}

void display1()
{
	hello h1;
	ifstream infile;
	infile.open("project2student.dat", ios::binary );
	while(infile.read((char *)&h1 , sizeof(h1)))
	{
		h1.putdata1();
	}
	infile.close();
}

// Delete Function 
void delete1(int n)
{
	hello h1;
	ifstream fin("project2student.dat", ios::binary );
	ofstream fout("temp1student.dat", ios::out | ios::binary);

	if(!fin || !fout )
	{
		cout<<"\nError In Opening File";
	}
	else
	{
		while( fin.read((char *)&h1 , sizeof(h1)))
		{
			if(h1.retgrno()!=n)
			{
				fout.write((char *)&h1 , sizeof(h1));
			}
		}
	}
	fin.close();
	fout.close();
	remove("project2student.dat");
	rename("temp1student.dat","project2student.dat");
	
}
class my
{
	public:
		char name1[255], gen2;
		int i  , id2 , no_of_days_present , experience ;
		float salary2;
		void show2()
		{
			cout<<"\n1::Add Records   ";
			cout<<"\n2::Search Records";
			cout<<"\n3::Modify Records";
			cout<<"\n4::List Records  ";
			cout<<"\n5::Delete Records";
			cout<<"\n6::Exit ";
		}
		void getdata2()
		{
			getchar();
			cout<<"Enter Name : " ; 				gets(name1);
			cout<<"Enter Id : " ; 					cin>>id2;
			cout<<"Enter gender  : " ; 				cin>>gen2;
			cout<<"Enter Salary  : " ; 				cin>>salary2;
		//getchar();
		}
		void putdata2()
		{
			cout<<endl<<setw(16)<<name1<<setw(8)<<id2<<setw(6)<<gen2<<setw(12)<<salary2<<endl;
		}	
		int retid2()
		{
			return id2;
		}
};

void input_records2()
{
	
	ofstream outfile;
	outfile.open("project2teachers.dat", ios::binary | ios::app);
	my m1;
	m1.getdata2();
	outfile.write((char *)&m1 , sizeof(m1));
	outfile.close();
	
}
void search2(int n)
{
	int flag=0;
	ifstream infile;
	infile.open("project2teachers.dat", ios::binary );
	my m1;
	while(infile.read((char *)&m1 , sizeof(m1)))
	{
		if(m1.retid2()==n)
		{
			cout<<"\n\n  \t  Name"<<"\t   ID"<<"     Gender"<<"     Salary";
			m1.putdata2();  
			flag=1;	
		}
	}
	if(flag==0)
	{
		cout<<"\nSearch Not Found";
	}
	infile.close();
	
}
void modify2(int n )
{
	fstream file;
	int flag =0;
	file.open("project2teachers.dat", ios::in | ios::out);
	my m1;
	while(file.read((char *)&m1 , sizeof(m1)))
	{
		if(m1.retid2()==n)
		{
			flag=1;
			cout<<"\nEnter New Details of Respective Teacher : ";
			m1.getdata2();
			int pos;
			pos = (-1) * sizeof(m1);
			file.seekp(pos , ios::cur);
			file.write((char *)&m1 , sizeof(m1));
		}
	}
	if(flag==0)
	{
		cout<<"\nRecord Not Found";
	}
	file.close();
}

void display2()
{
	my m1;
	ifstream infile;
	infile.open("project2student.dat", ios::binary );
	while(infile.read((char *)&m1 , sizeof(m1)))
	{
		m1.putdata2();
	}
	infile.close();
}

// Delete Function 
void delete2(int n)
{
	my m1;
	ifstream fin("project2teachers.dat", ios::binary );
	ofstream fout("temp1teachers.dat", ios::out | ios::binary);

	if(!fin || !fout )
	{
		cout<<"\nError In Opening File";
	}
	else
	{
		while( fin.read((char *)&m1 , sizeof(m1)))
		{
			if(m1.retgrno()!=n)
			{
				fout.write((char *)&m1 , sizeof(h1));
			}
		}
	}
	fin.close();
	fout.close();
	remove("project2teachers.dat");
	rename("temp1teachers.dat","project2tecahers.dat");
	
}

int main()
{
	hello h1;
	my m1;
	int ch , ch1 , ch2 , ch3 , ch4 , op1, op2 , op3 , op4 , count , i  ;
	int search_no , delete_no  , modify_no ; 
	while(1)
	{
	
		system("color 6");
		system("cls");
		cout<<"\n\t====================================";
		cout<<"\n\t|\t1:: Student                |";
		cout<<"\n\t|\t2:: Teachers               |";
		cout<<"\n\t|\t3:: Staffs                 |";
	    cout<<"\n\t|\t4:: Exit                   |";
    	cout<<"\n\t====================================";
		cout<<"\nEnter Your Choice : ";
	    cin>>ch;
	    system("color 2");
	    switch(ch)
	    {
	    	case 1:
    			system("color 9");
    			h1.show1();
    			cout<<"\nEnter your Option Number : ";
    			cin>>ch1;
    			switch(ch1)
    			{
    				case 1:
    					system("cls");
    					system("color ec");
    					cout<<"\n\t\t ========== Add Records======== \n\n" ;
    					cout<<"\nEnter Number of Records : ";
    					cin>>count;
    					for(i=1 ; i<=count ; i++)
    					{
    						input_records1();
    						cout<<"\n============================\n\n";
    					}
    					cout<<"\nPress Any Key To  Continue";
    					getch();
	    				break;
	    				
	    			case 2:
	    				cout<<"\nEnter GrNo To Be Searched : ";
	    				cin>>search_no;
	    				
						search1(search_no);
						cout<<"\nPress Any Key To  Continue";
	    				getch();
						break;
						
					case 3:
						cout<<"\nEnter GrNo To Be Searched and Modified: ";
	    				cin>>modify_no;
						modify1(modify_no);
						cout<<"\nPress Any Key To  Continue";
	    				getch();
						break;
						
					case 4:
						system("cls");
						cout<<"\n\n  \t  Name"<<"\t   GrNo"<<"    Std"<<"   Div"<<"   Gender"<<"     Fees";
						display1();
						cout<<"\nPress Any Key To  Continue";
	    				getch();
						break;
							
					case 5:
						cout<<"\nEnter GrNo of Record To be Deleted : ";
	    				cin>>delete_no;
						delete1(delete_no);
						cout<<"\nPress Any Key To  Continue";
	    				getch();
						break;
						
					case 6:
						exit(1);
						break;
						
					default:
						cout<<"\nWrong Input";
						h1.show1();
						main();
						break;					
				}
    			break;
		
    		case 2:
    			system("color 9");
    			m1.show2();
    			cout<<"\nEnter your Option Number : ";
    			cin>>ch1;
    			switch(ch1)
    			{
    				case 1:
    					system("cls");
    					system("color fc");
    					cout<<"\n\t\t ========== Add Records======== \n\n" ;
    					cout<<"\nEnter Number of Records : ";
    					cin>>count;
    					for(i=1 ; i<=count ; i++)
    					{
    						input_records2();
    						cout<<"\n============================\n\n";
    					}
    					cout<<"\nPress Any Key To  Continue";
    					getch();
	    				break;
	    				
	    			case 2:
	    				cout<<"\nEnter GrNo To Be Searched : ";
	    				cin>>search_no;
	    				
						search2(search_no);
						cout<<"\nPress Any Key To  Continue";
	    				getch();
						break;
						
					case 3:
						cout<<"\nEnter GrNo To Be Searched and Modified: ";
	    				cin>>modify_no;
						modify2(modify_no);
						cout<<"\nPress Any Key To  Continue";
	    				getch();
						break;
						
					case 4:
						system("cls");
						cout<<"\n\n  \t  Name"<<"\t   ID"<<"    Gender"<<"     Fees";
						display2();
						cout<<"\nPress Any Key To  Continue";
	    				getch();
						break;
							
					case 5:
						cout<<"\nEnter Id of Record To be Deleted : ";
	    				cin>>delete_no;
						delete2(delete_no);
						cout<<"\nPress Any Key To  Continue";
	    				getch();
						break;
						
					case 6:
						exit(1);
						break;
						
					default:
						cout<<"\nWrong Input";
						m1.show2();
						main();
						break;					
				}
    			break;

		case 4:
			system("color 9");
			cout<<"\nDo You Really Want to Exit \n1. For Yes \n2. For No : ";
			cin>>ch4;
			if(ch4==1) {
				system("color 2");
				exit(1);
			}	
			else {
				system("cls");
				main();
			}	
    	}
	}
}
