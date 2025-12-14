#include <stdio.h>
#define size 6

int main() {
int arr[size]={4,3,6,1,2,5};
for(int i=0;i<size-1;i++) {
int min_index=i;
for(int j=i+1;j<size;j++) {
if(arr[j]<arr[min_index]) {
min_index=j;
}
}
int temp=arr[i];
arr[i]=arr[min_index];
arr[min_index]=temp;
}
for(int i=0;i<size;i++) {
printf("%d ",arr[i]);
}
}

