/* Q2) Create a class named Shape with a function that prints "This is a shape".
 Create another class named Polygon inheriting the Shape class with the same function that prints "Polygon is a shape".
Create two other classes named Rectangle and Triangle  having the  function which prints "Rectangle is a polygon"  and 
"Triangle is a polygon" respectively. Again, make another derived class named Square of class rectangle and triangle having the same function 
which prints "Square is a rectangle" and "Square cannot be a Triangle ". Now, try calling the function by the object in a Sequence */

#include<iostream>
using namespace std;
class shape{
	public:
		void func1()
		{
			cout<<"\nThis is a Shape \n";
		}
};

class polygon : public shape{
	public:
		void func2()
		{
			cout<<"\nPolygon is a Shape \n";
		}
};

class rectangle {
	public:
		void func3()
		{
			cout<<"\nRectangle is Polygon \n";
		}
};

class triangle {
	public:
		void func4()
		{
			cout<<"\nTriangle is Polygon  \n";
		}
};

class square : public rectangle , public triangle  {
	public:
		void func5()
		{
			cout<<"\nSquare is a Like a Rectangle \n";
		}
		void func6()
		{
			cout<<"\nSquare Never be Like a Triangle ";
		}
};

int main()
{
	polygon p;
	cout<<"\nShape class : ";
	p.func1();
	cout<<"\nPolygon Class : ";
	p.func2();
	square obj;
	cout<<"\nRetangle Class : ";
	obj.func3();
	cout<<"\nTriangle Class : ";
	obj.func4();
	cout<<"\nSquare Class : ";
	obj.func5();
	obj.func6();
	return 0;
}
