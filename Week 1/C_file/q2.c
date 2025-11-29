#include <stdio.h>

int main() {
int n,sum=0;
printf("Enter a num: ");
scanf("%d",&n);
for(int i=1;i<=n;i++) {
sum=sum+(i*i);
}
printf("The sum of squares of first %d numbers is: %d\n",n,sum);
}


//the fixed part is=1+1+1 *4 (n,sum,i)=3*4=12=constant
//so the space complexity is= O(1)
