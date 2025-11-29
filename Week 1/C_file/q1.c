#include <stdio.h>

int sumoffirstn(int n) {
n=(n*(n+1))/2;
return n;
}

int main() {
int n,sum;
printf("Enter a num: ");
scanf("%d",&n);
sum=sumoffirstn(n);
printf("The sum of first %d numbers is: %d\n",n,sum);
}

//the fixed part is= 1+1+1 * 4(n ,sum and return)=3*4=12= constant
//so the space complexity is O(1)
