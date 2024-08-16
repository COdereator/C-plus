/* Program With Files (Method 2)   */
//Q2 Program to Read From File 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Method 1

int main()
{
	int i , std , roll ;
	char str;
	ifstream read;
	read.open("File3.txt ");
	while(read.eof()==0)
	{
			str=read.get();
			cout<<str;
	}
  cout<<endl;
	return 0;
}
		
// Method 2
//int main()
//{
//	int i , std , roll ;
//	string str;
//	ifstream read;
//	read.open("D:\\SF1\\C++ programs\\16 ) Files\\All practice files\\Practice File3.txt ");
//	while(read.eof()==0)
//	{
//		getline(read,  str);
//			cout<<str<<endl;
//	}
//	return 0;
//}  

	
