#include<iostream>
#include<fstream>
#include<stdio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class st
{
	public:
		int roll , grno;
		char name[200];
		void getdata(){
			cout<<"\nEnter Your Name : ";
			gets(name);
			
			cout<<"\nEnter Roll and GrNo : ";
			cin>>roll>>grno;
			getchar();
		}
};
st obj;        // Global Decleration of Object of Class
void input()
{
	int i=1;
	ofstream fobj;
	fobj.open("practice2.txt", ios::binary | ios::app);
	while(i<2){
		obj.getdata();
		fobj.write((char *)&obj , sizeof(st));
		i++;
		cout<<endl;
	}
	fobj.close();
}

int main()
{
	input();
	return 0;
}
