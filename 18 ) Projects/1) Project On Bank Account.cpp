#include <iostream>
#include <string.h> 
#include<stdlib.h>
using namespace std; 

int account[10]={ 4567 , 4568 , 4571 , 2562 , 5629 , 9246 , 3294 , 5292 , 0 , 0 };
    int bal[10]={ 5000 , 1000 , 3000 , 9000 , 8000 , 15000, 1000 ,12000 , 0 , 0 };
    int pin[10]={ 1234 , 1256 , 5464 , 7294 , 4466 , 2345 , 4565 , 2608 , 0 , 0 }; 
	int mob[10]={ 1234 , 5678 , 91011, 1213 , 1415 , 1617 , 1819 , 2021 , 0 , 0 }; 
char aadhar[10][5]={"AB12" , "CD12" , "EF12" , "GH12" , "IJ12" , "KL12" , "MN12" , "OP12" , "QR12" , "ST12" };

struct bank {
	int balwithdraw[10];
	int baldeposit[10];
	int count;
}customer[10];

void balance(int acc_no , int pin_no)
{
	int  i,count=0;
	for(i=0 ; i<10 ; i++)
	{
		if((account[i]==acc_no) && ( pin[i]==pin_no))
		{
			cout<<"\nYour Balance is "<<bal[i]<<endl;
			count=1;
			break;
		}
	}
	if(count==1)  {	
		cout<<"Transaction SucessFull"<<endl;
	}
	else  { 
	    cout<<"Wrong Account No"<<endl;		
	}
}

void withdrawal(int acc_no,int pin_no)
{
	int  i , count=0 ,draw  , a=0;
	for(i=0 ; i<10 ; i++)
	{
		if(account[i]==acc_no && (pin[i]==pin_no))
		{
			count=1;
			cout<<"\nEnter your Ammount to withdraw : ";
			cin>>draw;
			if(bal[i]>draw)
			{
				customer[i].balwithdraw[a+1]=draw;
				customer[i].count++;
				bal[i]=bal[i]-draw;
			}
			else {
				count=0;
				cout<<"Not Sufficient Balance";
			    }
		}
				
	}
	if(count==1) {	
		cout<<"Transaction SucessFull"<<endl;
	    }
	else  { 
	    cout<<"Wrong Pin Number"<<endl;
		cout<<"Transaction UnSucessFull"<<endl;		
	    }
}

void deposit(int acc_no , int pin_no)
{
	int depo , count=0 , orginal , i,a=0;
	for(i=0 ; i<10 ; i++)
	{
		count=0;
		if(account[i]==acc_no &&(pin[i]==pin_no))
		{
			count =1;
			cout<<"\nEnter your Amount : ";
			cin>>depo;
			orginal=bal[i];
			bal[i]=bal[i]+depo;
			if(bal[i]>orginal)
		     {
		     	customer[i].baldeposit[a+1]=depo;
		     	customer[i].count++;
			    cout<<"Transaction SucessFull !!!!"<<endl;
	     	}
	   }
	}
	system("cls");
}

void change(int acc_no , int pin_no)
{
	int choice , neww_mob , old_mob , count=0 ,neww_pin , old_pin , i ;
	char neww_add[5] , old_add[5];
	cout<<"\n1.Mobile Number\n2.Aadhar Number\n3.Pin";
	cout<<"\nEnter Your Choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\nEnter your Old Mobile Number: ";
			cin>>old_mob;
			cout<<"\nEnter your New Mobile Number: ";
			cin>>neww_mob;
			for(i=0 ; i<10 ; i++)
	        {    
		        if(account[i]==acc_no &&(pin[i]==pin_no))
		         {
		         	count=1;
			        mob[i]=neww_mob;
                    if(mob[i]!=old_mob)
		            {
			            cout<<"Transaction SucessFull !!!!"<<endl;
	            	}
	            }
	            if(count==0)
	            {
	                cout<<"Transaction UnSucessFull !!!!"<<endl;	
				}
	        }
		   break;
		   
		case 2:
			cout<<"\nEnter your Old Aadhar Card Number: ";
			cin>>old_add;
			cout<<"\nEnter your New Aadhar Card Number: ";
			cin>>neww_add;
			for(i=0 ; i<10 ; i++)
	        {    
		        if(account[i]==acc_no &&(pin[i]==pin_no))
		         {
		         	count=1;
			        strcpy(aadhar[i],neww_add);
                    if(aadhar[i]!=old_add)
		            {
		            	cout<<"\nYour New AAdhar Number : "<<aadhar[i];
			            cout<<"\nTransaction SucessFull !!!!"<<endl;
	            	}
	            }
	            if(count==0)
	            {
	                cout<<"Transaction UnSucessFull !!!!"<<endl;	
				}
	        }
	        break;
			
		case 3:
			cout<<"Enter your Old Mobile Number: ";
			cin>>old_mob;
			cout<<"Enter your New Mobile Number: ";
			cin>>neww_mob;
			for(i=0 ; i<10 ; i++)
	        {    
		        if(account[i]==acc_no &&(pin[i]==pin_no))
		         {
		         	count=1;
			        mob[i]=neww_mob;
                    if(mob[i]!=old_mob)
		            {
		            	cout<<"Your New Mobile Number: "<<mob[i];
			            cout<<"Transaction SucessFull !!!!"<<endl;
	            	}
	            }
	            if(count==0)
	            {
	                cout<<"Transaction UnSucessFull !!!!"<<endl;	
				}
	        }
	        break;
			
		default:
			cout<<"\nWrong Input";
    		change(acc_no , pin_no);
	}
}

void passbook(int acc_no)
{
	int i , j;
	cout<<"\n\t\tPlease Insert Your PassBook";
	cout<<"\n\t\tPlease Wait"<<endl;
//	cout<<"Sr.no\t\tWithdraw\t\tDeposit\t\tTotal";
//	for(j=1 ; j<10 ; j++)
//	{
//		if(account[j]==acc_no)
//		{
//			for(i=0 ; i<customer[i].count ; i++)
//			cout<<"\t\t"<<customer[j].balwithdraw[i+1]<<endl;
//			cout<<"\t\t\t\\t\t"<<customer[j].baldeposit[i+1]<<endl;
//			
//		 } 
//	}
	cout<<"\n\t\tPlease Remove Your PassBook";
}
int main() 
{ 
    int opt=0,ch=0,acc_no,pin_no , i;
    for(i=0 ; i<10 ; i++)
    {
    	customer[i].count=0;
	}
    cout<<"\nEnter your Account Number: ";
    cin>>acc_no;
    cout<<"Enter your 4 Digit Pin: ";
    cin>>pin_no;
    
    cout<<"\n 1. Balance Enquiry \n 2. Withdrawal \n 3. Deposit \n 4. Change any Information \n 5. Print Passbook \n 6. For Exit";
    cout<<"\n Enter your Option Number: ";
    cin>>opt;
    switch(opt)
    {
    	case 1:
    		balance(acc_no,pin_no);
    		main();
    		break;
    		
    	case 2:
    		withdrawal(acc_no,pin_no);
    		main();
    		break;
    		
    	case 3:
    		deposit(acc_no,pin_no);
    		main();
    		break;
    		
    	case 4:
    		change(acc_no,pin_no);
    		main();
    		break;
    		
    	case 5:
    		passbook(acc_no);
    		main();
    		break;
    		
    	case 6:
    		cout<<"\nDo you Really Want to Exit \n1.Yes \n2.No\nPress Your Choice : ";
    		cin>>ch;
    		if(ch==1)  {
    			exit(1);
			}
			else  {
				main();
			}
			break;
			
    	default:
    		cout<<"\nWrong Input";
    		system("cls");
    		main();
	}
  return 0;
} 
