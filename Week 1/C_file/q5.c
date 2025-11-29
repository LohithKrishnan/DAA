#include <stdio.h>
#define r 3
#define c 3
int main() {
int mat[r][c]= {{1,2,3},{4,5,6},{7,8,9}};
int tmat[r][c];

for(int i=0;i<r;i++) {
for(int j=0;j<c;j++) {
tmat[i][j]=mat[j][i];
}
}

for(int i=0;i<r;i++) {
for(int j=0;j<c;j++) {
printf("%d ",tmat[i][j]);
}
printf("\n");
}
}


//the fixed part=(1+1+ 3*3 + 3*3)*4 ,(i,j,mat array, tmat array)=20*4=80=constant
//no variable part
//so the space complexity is= O(1)
