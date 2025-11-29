#include <stdio.h>

int fibo(int n) {
if(n==1){
return 0;
}
else if(n==2){
return 1;
}
else {
return fibo(n-1)+fibo(n-2);
}
}

int main() {
int n;
printf("Enter a num: ");
scanf("%d",&n);
for(int i=1;i<=n;i++) {
printf("%d ", fibo(i));
}
}


//the fixed part is=1*4 (n) =4
//the variable part is=n*(n)*4=4n^2
//the space complexity is= 4n^2+4
//so the space complexity is= O(n2)
