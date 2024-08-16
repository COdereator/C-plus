//program to find reverse of any number using recursion
// METHOD 1
#include<stdio.h>

int reverse(int n)
{
	static int rem=0 , d ; 
	if(n!=0)
	{
		d=n%10;
		rem=(rem*10)+d;
		reverse(n/10);
	}
	else
	{
		return rem;
	}
	
}
void main()
{
 	int n,rev;
 	printf("Enter a Number:");
 	scanf("%d",&n);
 	rev=reverse(n);
 	printf("\nReverse of a Number : %d",rev);
 	getch();
}

// METHOD 2
//#include<stdio.h>
//
//int reverse(int , int );
//
//int main()
//{
//    int number, result;
//    printf("Enter number: ");
//    scanf("%d", &number);
////    Second argument must be 0 while calling function 
//    result = reverse(number, 0);
//
//    printf("Reverse of %d", result);
//    return 0;
//}
//
//int reverse(int num, int rev)
//{
//    if(num==0)
//        return rev;
//    else
//        return reverse (num/10, rev*10 + num%10);
//}
