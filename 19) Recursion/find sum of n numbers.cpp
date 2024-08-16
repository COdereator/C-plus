#include<stdio.h>
#include<conio.h>

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
	
  int result , n ;
  printf("\nEnter the Last Limit: ");
  scanf("%d",&n);
  result= sum(n);
  printf("%d", result);
  return 0;
}


