//Q9 program to check whether given character is alphabet, digit or special character 

#include<iostream>
using namespace std;

int main()
{
	char alpha;
	cout<<"Enter a character:";
	cin>>alpha;
    if((alpha>='a' && alpha<='z')|| (alpha>='A' && alpha<='Z')) 
    {
    	cout<<alpha <<" is Alphabet";
	}
	else if(alpha>='0' && alpha<='9')
	{
		cout<<alpha <<" is a number";
	}
	else
	{
		cout<<alpha << "  is special symbol";
	}
	return 0;
}
