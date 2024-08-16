// Q17 Program to Print Heart Pattern using Stars

#include<iostream>
using namespace std;

/*Output
Enter value of n: 10
  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/
int main()
{
	int i , j , k , m , n;
	cout<<"\nEnter Number of n : ";
	cin>>n;
//	cout<<"  *****     *****\n";
//cout<<" *******   *******\n";
//cout<<"********* *********\n";
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
	for(i=n ; i>=1 ; i--)
	{
		for(k=i ; k<n ; k++ )
		{
			cout<<" ";
		}
		
		for(j=1 ; j<=(2*i-1) ; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
