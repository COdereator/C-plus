//Q1 program to print (1 to 7)days using switch

#include<iostream>
using namespace std;

int  main()
{
	int opt;
	cout<<"Enter a number between 1 to 7: ";
	cin>>opt;
	switch(opt)
	{
		case 1:
			cout<<"Its Monday";
			break;
			
		case 2:
			cout<<"Its Tuesday";
			break;
			
		case 3:
			cout<<"Its Wednesday";
			break;
			
		case 4:
			cout<<"Its Thusrday";
			break;
			
		case 5:
			cout<<"Its Friday";
			break;
			
		case 6:
		    cout<<"Its saturday";
			break;
			
		case 7:
			cout<<"Its Sunday";
			break;
			
		default:
		    cout<<"\nYou Fool !!!\nPress only 1 to 7 ";
			break;	
	}
}
