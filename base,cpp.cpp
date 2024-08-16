#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	//	String = collection of character 	
	char a[] = {"hello"};
	string name = "Hello ";

	cout<<"Name : "<<name<<endl;
	
	cout<<"Index : "<<name[2]<<endl;
	
	// find the length  of string
	int length = name.length();
	cout<<"Length : "<<length<<endl;
	
	// find the single character from the string
	cout<<"CharAt : "<<name.at(2)<<endl;
	
	
	// Append data in the string 
	string add = "World";
	name.append(add);
	cout<<"Appended String : "<<name<<endl;
	
	// Compare two string 
	string comp1 = "Iello";
	string comp2 = "Hello";
	int result = comp1.compare(comp2);
	cout<<"Result : "<<result<<endl;
	
	// Substring 
	string substr = comp1.substr(2);
	cout<<"SubString : "<<substr<<endl;
	
	// find the String 
	cout<<"Find : "<<name.find("W")<<endl;
	
	// replace the string
	string replace = comp1.replace(0,2,"Hello");
	cout<<"Replaced String : "<<replace<<endl;
	
	// insert the string
	string insert = comp2.insert(2,"s");
	cout<<"Insert the String "<<insert<<endl;
	
	// erase the string
	string erase = comp2.erase(0,2);
	cout<<"Delete : "<<erase;
	
	
//	int i;
//	for(i=0;i<7;i++)
//	{
//		cout<<name[i];
//	}
}
