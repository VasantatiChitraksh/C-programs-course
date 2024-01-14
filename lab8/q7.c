#include <stdio.h>
int main() {
int n,m,p;
printf("The no of rows and columns of the matrix A:");
scanf("%d", &n);
scanf("%d", &m);
printf("The no of columns of the matrix B:");
scanf("%d", &p);
int A[n][m];
printf("The matrix A is \n");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d", &A[i][j]);
}
}
printf("The matrix B is \n");
int B[m][p];
for(int j=0;j<m;j++){
for(int k=0;k<p;k++){
scanf("%d", &B[j][k]);
}
}
int MUL[n][p];
for(int i=0;i<n;i++){
for(int k=0;k<p;k++){
MUL[i][k]=0;
for(int j=0;j<m;j++){
MUL[i][k]=MUL[i][k]+(A[i][j]*B[j][k]);
}
}
}
printf("The output is\n");
for(int i=0;i<n;i++){
for(int k=0;k<p;k++){
printf("%d ",MUL[i][k]);
}
printf("\n");
}
return 0;
}
