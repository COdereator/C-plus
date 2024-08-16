#include<iostream>
using namespace std; 
template <class T>
void function(T a , T b)
{
	cout<<"\nA="<<a<<"\nB="<<b;
	cout<<"\nSum : "<<a+b;

}

int main()
{
//	int i=10,j=20;
//	function(i,j);

  double m=122.45 ,  n= 12.54;
  function(m,n);

//	float  m=4.5 , n = 45.7 ;
//	function(m,n);
}
