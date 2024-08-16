//Q10 program to check  alphabet is uppercase or lowercase

#include<iostream>
using namespace std;

int main()
{
	char alpha;
	cout<<"Enter a character:";
	cin>>alpha;
    if(alpha>='a' && alpha<='z') 
    {
    	cout<<alpha <<" is lowercase";
	}
	else 
	{
		cout<<alpha <<" is lowrcase";
	}
	return 0;
}
