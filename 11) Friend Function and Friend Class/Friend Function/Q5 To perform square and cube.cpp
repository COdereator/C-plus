// Q5 Progrm to Print Square and Cube using Friend Function

#include<iostream>
using namespace std;

class my{
	private :
		int num, sq , cu;
		
	public:
		void getdata();
		friend void square(my);
		void cube();
};

void my::getdata()
{
	cout<<"\nEnter a Number : ";
	cin>>num;
}
void square(my m)
{
	m.sq =  m.num * m.num ;
	cout<<"\nSquare is "<< m.sq;
}
void my::cube()
{
	cu =  num*num*num;
	cout<<"\nCube is "<< cu;
}
int main()
{
	my m;
	m.getdata();
	square(m);
	m.cube();
	return 0;
}
