#include<iostream>
using namespace std; 
template <class T>
void compare(T a , T b)
{
	if(a>b)
	{
		cout<<a<<" is Greater ";
	}
	else {
		cout<<b<<" is Greater ";
	}
}

int main()
{
//	int i=10,j=20;
//	compare(i,j);

  double m=122.45 ,  n= 12.54;
  compare(m,n);

//	float  m=4.5 , n = 45.7 ;
//	compare(m,n);
	return 0;
}
