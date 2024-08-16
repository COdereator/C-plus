//Q8 program to check vowel or not
#include<iostream>
using namespace std;

int main()
{
	char alpha;
	cout<<"Enter a text :";
	cin>>alpha;
    if(alpha=='a' || alpha=='e'|| alpha=='i' || alpha=='o' || alpha=='u') 
    {
    	cout<<alpha <<" is Vowel";
	}
	else
	{
		cout<<alpha <<" is Not a Vowel ";
	}
	return 0;
}
