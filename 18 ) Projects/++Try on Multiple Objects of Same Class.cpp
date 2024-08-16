#include<iostream>
#include<stdio.h>
using namespace std;
class my{
	private:
		char ar[100];
		int i ;
		public:
			void getdata()
			{
				cout<<"Enter name : ";
				gets(ar); 	
			}
			void putdata()
			{
				cout<<"Name : ";
				puts(ar);
			}
};

int main()
{
	my m[3];
	int i;
	cout<<"\nEnter 3 Names  : "<<endl;
	for(i=0 ; i<3 ; i++)
	{
		m[i].getdata();
	}
	cout<<"\nPrintitng Names :"<<endl;
	for(i=0 ; i<3 ; i++)	{
		m[i].putdata();
	}
}
