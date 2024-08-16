// Program With Files
//Q2 Program to Read File 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	int i;
	fstream obj;
	obj.open("File1.txt ",ios::in);
	char ch;
	obj.seekg(0);
	while(obj)
	{
		ch=obj.get();
		cout<<ch;
	}
	obj.close();
	return 0;
}
		


