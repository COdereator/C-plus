//Q7 program to check alphabet or not
#include<iostream>
using namespace std;

int main()
{
	char alpha;
	cout<<"Enter a text :";
	cin>>alpha;
    if((alpha>='a' && alpha<='z')|| (alpha>='A' && alpha<='Z')) 
    {
    	cout<<alpha <<" is Alphabet";
	}
	else
	{
		cout<<alpha <<" is Not a Alphabet ";
	}
	return 0;
}
