#include <stdio.h>
#define size 6
int main() {
int arr[size]={4,3,6,1,2,5};

for(int i=0;i<size;i++) {
int temp=arr[i];
int j=i-1;
while(j>=0 && arr[j]>temp)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
for(int i=0;i<size;i++) {
printf("%d ",arr[i]);
}
printf("\n");
}
