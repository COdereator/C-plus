//Q3 program to check vowel or consonant using switch

#include<iostream>
using namespace std;

int main()
{
	char opt;
	cout<<"Enter a Alphabet: ";
	cin>>opt;
	switch(opt=='a' || opt=='e' || opt=='i'||opt=='o' || opt=='u')
	{
		case 1:
			cout<<"\nIts Vowel But in Lowercase ";
			break;
		
		case 0:
		    switch(opt=='A' || opt=='E' || opt=='I'||opt=='O' || opt=='U')	
		    {
		    	case 1:
		    		cout<<"\nIts  Vowel but in Uppercase ";
		    		break;
		    		
		    	case 0:
				    cout<<"\nIts Consonant";
					break;			
			}
	}
}
