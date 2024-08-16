//Q2 program to find sum of all elements of array

#include<iostream>
using namespace std;

int main()
{
	int arr[10], i , n ,  s=0;
	cout<<"\nEnter no of Elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements: \n";
    for(i=0 ; i<n ; i++)
    {
   	    cin>>arr[i];
    }
    //for sum
    for(i=0 ; i<n ; i++)
    {
   	    s=s+arr[i];
    }
    cout<<"\nSum of Array Elements: "<<s;
	
	
	
	return 0;
}
