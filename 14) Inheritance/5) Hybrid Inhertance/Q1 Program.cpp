/*  Q1) Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale 
which inherits both the above classes. Now, create a function in each of these classes which prints "I am mammal", 
"I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. 
Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of each of its parent by the object of BlueWhale  */

#include<iostream>
using namespace std;

class mammal{
	
	public:
		void info1()
		{
			cout<<"\nI am mammal ";
		}
};

class marine{
	
	public:
		void info2()
		{
			cout<<"\nI am a marine animal ";
		}
};

class bluewhale : public mammal , public marine{
	
	public:
		void info3()
		{
			cout<<"\nI belong to both the categories: Mammals as well as Marine Animals ";
		}
};

int main()
{
	cout<<"\nClass Mammal : ";
	mammal obj1;
	obj1.info1();
	cout<<"\n\nClass Marine : ";
	marine obj2;
	obj2.info2();
	cout<<"\n\nClass Bluewhale : ";
	bluewhale obj3;
	obj3.info1();
	obj3.info2();
	obj3.info3();
	return 0;
}
