//Q5 Program to find sum, average and product of all Array elements

#include<iostream>
using namespace std;

int main()
{
   int a[10],i ;
   float s=0,n, p=1;
   cout<<"\nEnter no of Elements: ";
   cin>>n;
   cout<<"Enter "<<n<<" Elements: \n";
   for(i=0 ; i<n ; i++)
   {
   	    cin>>a[i];
   }
   for(i=0 ; i<n ; i++)
   {
   	    s=s+a[i];
		p=p*a[i];       
   }
   cout<<"\nSum of Array Elements: "<<s;
   cout<<"\nProduct of Array Elements: "<<p;
   cout<<"\nAverage of Array Elements: "<<s/n;

   return 0;
}
