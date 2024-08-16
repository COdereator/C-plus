//Q1 Program to print and read user input array elements 

#include<iostream>
using namespace std;

int main()
{
   int a[10],i,n;
   cout<<"\nEnter no of Elements: ";
   cin>>n;
   cout<<"Enter "<<n<<" Elements: \n";
   for(i=0 ; i<n ; i++)
   {
   	    cin>>a[i];
   }
   cout<<"\nArray Elements: ";
   for(i=0 ; i<n ; i++)
   {
   	    cout<<a[i]<<"  ";
   }

   return 0;
}
