/* Q4 Create a class name Basics . Accept Name ,ID no and basic Salary and .Create another class name as Input .Input hra , da ,
 ta , ma  in this class and find total of hra , da ta , ma and basic  in this class .Create another class name as other 
 ,calculate pf and ecs  in this class . Create another class name as Result . Find total of Net salary in this class */
 
#include<iostream>
using namespace std;

class basics {
	
//	protected :
//		int bs , id ;
//		char name[255];
		
	public:
		int bs , id ;
		char name[255];
		 void getdata();	
};
void basics::getdata()
{
	cout<<"\nEnter Name , ID No and Basic Salary : ";
	cin.get(name , 255 , '\n');  
	cin>>id>>bs;
}
//=================================================================

class input : public basics {
	protected:
		int hra , da , ta , ma  , gs;
		
	public:
		void calinput();	
};

void input::calinput()
{
	hra = 0.09 * bs;
	da = 0.08 * bs;
	ta = 0.05 * bs;
	ma = 0.12 * bs;
	gs = hra + da + ta + ma + bs ;
}
//=================================================================
class other : public input {
	protected:
		int pf , ecs , ded ;
		
	public:
		void calother();	
};
void other::calother()
{
	pf = 0.02*gs ; 
	ecs = 0.01 * gs ;
	ded = pf + ecs;
}
//=================================================================
 class Result : public basics , public other {
 	protected:
 		int net ;
 		
 	public:
	 	void total();	
 };
 void Result::total()
 {
 	net = gs- ded ;
 	//cout<<"\nName: "<<name;
// 	cout<<"\nID : "<<id;
 	cout<<"\nHra : "<<hra ;
	cout<<"\nDa :"<<da;
	cout<<"\nTa :"<<ta;
	cout<<"\nma: "<<ma;
	cout<<"\nGross : "<<gs;
 	cout<<"\nTotal Salary "<< net ;
 }
//========================================================= 
 int main()
 {
 	Result r;
// 	r.getdata();
r.getdata();
 	r.calinput();
 	r.calother();
 	r.total();
 	return 0;
 }
