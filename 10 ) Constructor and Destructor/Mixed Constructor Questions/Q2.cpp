/* Q2) Create a class to print the area of a square and a rectangle. The class has two functions with
 the same name but different number of parameters.The function for printing the area of rectangle has two
  parameters which are its length and breadth respectively while the other function
 for printing the area of square has one parameter which is the side of the square. */

#include<iostream>
using namespace std; 

class cal {
	private:
		int s , as , ar , l , b ;
		
	public:
		cal(){}
		cal(int x );
		cal(int z , int y);	
		void opr();
};
cal::cal(int x)
{
	s=x;
	as=s*s;
}
cal::cal(int z , int y)
{
	l=z ; b=y ;
	ar=l*b;
}
void cal::opr()
{
	cout<<"\nArea of Square : "<<as;
	cout<<"\nArea of Rectangle : "<<ar;
}
	int main()
	{
		int x , b , d;
		cout<<"\nEnter side : ";
		cin>>x;
		cout<<"\nEnterlength and breadth : ";
		cin>>b>>d;
		cal c;
		c=cal(x);
		c=cal(b,d);
		c.opr();
	}
