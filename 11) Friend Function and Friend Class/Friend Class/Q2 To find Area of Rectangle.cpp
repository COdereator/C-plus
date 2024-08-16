// Q2 To find Area of Rectangle

#include <iostream>

using namespace std;
class rec;
class my
{
	friend class rec;      // declaring Rectangle as friend class
	int length ;
	public:
		void getdata();
};
void my::getdata()
{
	cout<<"\nEnter length of Rectangle : ";
	cin>>length;
}
class rec
{
	int breadth;
	public:
		void getdata1();
		void area(my m);
};
void rec::getdata1()
{
	cout<<"\nEnter breadth of Rectangle : ";
	cin>>breadth;
}
void rec::area(my m)
{
	cout<<"\nArea of Rectangle : "<<m.length * breadth;
}
int main()
{
	my obj;
	obj.getdata();
	rec obj1 ;
	obj1.getdata1();
	obj1.area(obj);
	
}
