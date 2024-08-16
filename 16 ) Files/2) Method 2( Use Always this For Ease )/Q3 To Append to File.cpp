/* Program With Files (Method 2)   */
//Q3 Program to Append File 
#include<iostream>
#include<fstream>
using namespace std;
//1st Type String
int main()
{
	int i , std , roll ;
	char str[255];
	cout<<"\nEnter Your String : ";           
	cin.get(str , 255 , '\n');
	cout<<"\nEnter your Standard and Roll No : " ;
	cin>>std>>roll;
	ofstream write;
	write.open("File3.txt ", ios::app);
	write<<endl<<"\nName : "<<str;
	write<<"\nStd : "<<std<<"\nRoll : "<<roll;
	write.close();
	return 0;
}
// 2nd Type String
/* int main()
{
	int i , std , roll ;
	string name;

	cout<<"\nEnter Your Name : ";				
	getline(cin , name);
	cout<<"\nEnter your Standard and Roll No : " ;
	cin>>std>>roll;
	ofstream write;
	write.open("D:\\SF1\\C++ programs\\16 ) Files\\All practice files\\Practice File3.txt ", ios::app);
	write<<"Name : "<<name<<endl;
	write<<"Std : "<<std<<"\nRoll : "<<roll;
	write.close();
	return 0;
} */


