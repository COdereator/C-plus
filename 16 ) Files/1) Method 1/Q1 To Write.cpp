//*Program With Files   (Method 1)    */
//Q1 Program to Write File 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int i;
	fstream obj;
	obj.open("File1.txt ",ios::out);
	char str[255];
	cout<<"Enter Your String : ";
	cin.get(str , 255 , '\n');
	obj.put('\n');
	for(i=0 ; str[i]!='\0' ; i++ )
	{
		obj.put(str[i]);
	}
	obj.close();
	return 0;
}
		


