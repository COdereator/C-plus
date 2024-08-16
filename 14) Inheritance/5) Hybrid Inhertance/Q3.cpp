/* Q3 Create a class name as data . Accept Name ,Roll no and Five subjects marks in this class . create another class name as total.
Find total of five subjects marks in this class . Create another class name as Sports , accept EVS and Sports marks in this 
class . Create another class name as Result . Find total of all and find percentage in this class and print percentage 
and total */

#include<iostream>
using namespace std;

class data{
	protected:
			int roll , a , b , c , d , e;
			char str[100];
		
	public:
		void getdata()
		{
			cout<<"\nEnter your Full Name : ";
			cin.get(str , 100 , '\n');
			cin.ignore();
			cout<<"\nEnter Roll number : ";
			cin>>roll;
			cout<<"\nEnter marks of Physics : ";
			cin>>a;
			cout<<"\nEnter marks of Chemistry : ";
			cin>>b;
			cout<<"\nEnter marks of Maths : ";
			cin>>c;
			cout<<"\nEnter marks of CS-1 : ";
			cin>>d;
			cout<<"\nEnter marks of CS-2 : ";
			cin>>e;
		}	
};

class total: public  data{
	protected:
		int t ; 
		
	public:
		void opr()
		{
			t=a+b+c+d+e;
		}
};

class evsp{
	protected:
		int evs , sp;
		
	public:
		void getdata1()
		{
			cout<<"\nEnter marks of EVS : ";
			cin>>evs;
			cout<<"\nEnter marks of Sports : ";
			cin>>sp;	
		}	
};
class result: public total , public evsp{
	
	private:
		int tot , per;
		
	public:
		void opr1()
		{
			tot=t+evs+sp;
			per=tot/7;
		}
		void display()
		{
			cout<<"\nName        : "<<str;
			cout<<"\nRoll no     : "<<roll;
			cout<<"\nTotal Marks : "<<tot;
			cout<<"\nPercentage  : "<<per<<"%";
		}
};

int main()
{
	result r;
	r.getdata();
	r.opr();
	r.getdata1();
	r.opr1();
	r.display();
	return 0;
}
