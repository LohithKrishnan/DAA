#include <stdio.h>
#define size 6
int main() {
int arr[size]={4,3,6,1,2,5};

for(int i=0;i<size;i++) {
for(int j=0;j<size-1;j++) {
if(arr[j]>arr[j+1]) {
int temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
}
}
}
for(int i=0;i<size;i++) {
printf("%d ",arr[i]);
}
printf("\n");
}
