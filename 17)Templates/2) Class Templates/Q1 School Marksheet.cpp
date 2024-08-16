// Q1 Program to Make Marksheet 

#include<iostream>
using namespace std;

template <class T>
class marks{
	
//	private:
		T a , b, c , d, e , f , g , h;
		
	public:
	//	marks(){}
		marks()
		{
				cout<<"\nEnter Physics Marks  : ";
				cin>>a;
				cout<<"\nEnter Chemistry Marks:";
				cin>>b;
				cout<<"\nEnter Maths Marks    : ";
				cin>>c;
				cout<<"\nEnter CS-1 Marks     :";
				cin>>d;
				cout<<"\nEnter CS-2 Marks     : ";
				cin>>e;
				cout<<"\nEnter English Marks  :";
				cin>>f;
		}
		void Opr()
		{
			g= a + b + c + d + e + f ;
			h=g/6;
		}
		void Display()
		{
				cout<<"\nTotal : "<<g;
				cout<<"\nPercentage : "<<h<<"%";
		}
	
};

int main()
{
	marks <float> obj;
	obj.Opr();
	obj.Display();
}
