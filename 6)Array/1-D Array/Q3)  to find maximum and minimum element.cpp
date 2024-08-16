//Q3) Program to find maximum and minimum element in array 

#include<iostream>
using namespace std;

int main()
{
    int a[10] ,  n , i ,j , max , min;
   cout<<"\nEnter no of Elements: ";
   cin>>n;
   cout<<"Enter "<<n<<" Elements: \n";
   for(i=0 ; i<n ; i++)
   {
   	    cin>>a[i];
   }
   max=a[0], min=a[0];
   for(i=0 ; i<n ; i++)
   	{
   	    if(max<a[i])
   	    {
   	    	max=a[i];
		}
		if(min>a[i])
		{
		   	min=a[i];
		}
	}
	cout<<"\nMaximum Element : "<<max;
	cout<<"\nMinimum Element : "<<min;
	return 0;
}
