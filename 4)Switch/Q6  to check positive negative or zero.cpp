//Q6 program to check positive negative or zero using switch

#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a Number: ";
	cin>>a;
	switch(a>0)
	{
		case 1:
			cout<<"\nNumber is Positive ";
			break;
		
		case 0:
		    switch(a==0)	
		    {
		    	case 1:
		    		cout<<"\nNumber is Zero ";
		    		break;
		    		
		    	case 0:
				    cout<<"\nNumber is Negative";
					break;			
			}
	}
}
