//Q2 program to print (1 to 12)months using switch

#include<iostream>
using namespace std;

int  main()
{
	int opt;
	cout<<"Enter a number between 1 to 12 for any Month: ";
	cin>>opt;
	switch(opt)
	{
		case 1:
			cout<<"Its January";
			break;
			
		case 2:
			cout<<"Its February;
			break;
			
		case 3:
			cout<<"Its March";
			break;
			
		case 4:
			cout<<"Its April";
			break;
			
		case 5:
			cout<<"Its May";
			break;
			
		case 6:
		    cout<<"Its June";
			break;
			
		case 7:
			cout<<"Its July";
			break;
			
		case 8:
			cout<<"Its August";
			break;
			
		case 9:
			cout<<"Its September";
			break;
			
		case 10:
			cout<<"Its October";
			break;
			
		case 11:
			cout<<"Its November";
			break;
			
		case 12:
			cout<<"Its December";
			break;
				
		default:
		    cout<<"\nYou Fool !!!\nPress only 1 to 12 ";
			break;	
	}
}
