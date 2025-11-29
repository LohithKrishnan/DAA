#include <stdio.h>

int fact(int n) {
if(n==1 || n==0) {
return 1;
}
else{
return (n*fact(n-1));
}
}

int main() {
int n;
printf("Enter a num: ");
scanf("%d",&n);
printf("The factorial of %d is: %d\n",n,fact(n));
}


//the fixed part is=1*4 (n)=4=constant
//the variable part is= n*4 (n inside function)=4n
//the space complexity=4+4n
//so the space complexity is= O(n)
