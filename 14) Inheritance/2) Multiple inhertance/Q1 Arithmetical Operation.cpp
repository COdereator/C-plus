/* Q1 Create a Class Name as A . Accept one Value in this class . Create another Class Name as B . 
Accept one Value in this class . Create a Class Name as Arith . Perform Arithmatical Operation In this Class */

#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
 	public:
 		void getdata1()
   		{
 	    	cout << "Enter value of x: "; 
			cin >> x;
    	}
};
class B
{
	protected:
		int y;
 	public:
 		void getdata2()
 		{
 	    	cout << "Enter value of y: "; 
			cin >> y;
 		}
};
class C : public A, public B   //C is derived from class A and class B
{
 	public:
 		void operation()
 		{
 	    	cout << "\n\nSum = " << x + y;
 	    	cout << "\nSubtraction = " << x - y;
 	    	cout << "\nMultiplication = " << x * y;
 	    	cout << "\nDivision = " << x / y;
 		}
};

int main()
{
 	 C obj1; //object of derived class C
 	 obj1.getdata1();
 	 obj1.getdata2();
 	 obj1.operation();
 	 return 0;
}  
