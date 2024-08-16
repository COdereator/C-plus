//Q4 Program to sort the array elements

#include<iostream>
using namespace std;

int main()
{
   int a[10],i,j,n,t;
   cout<<"\nEnter no of Elements: ";
   cin>>n;
   cout<<"Enter "<<n<<" Elements: \n";
   for(i=0 ; i<n ; i++)
   {
   	    cin>>a[i];
   }
   
   for(j=0 ; j<=n-1 ; j++)
   {
   	for(i=0 ; i<n-1 ; i++)
   	    {
   	    	if(a[i]>a[i+1])
   	    	{
   	    	t=a[i];
			   a[i]=a[i+1];
			   a[i+1]=t;	
			   }
   		
	    }
   }
   cout<<"\nSorted Elements:\n";
   for(i=0 ; i<n ; i++)
   {
   	    cout<<a[i]<<endl;
   }

   return 0;
}
