#include <stdio.h>
int main() {
int n;
printf("The no of elements in the array:");
scanf("%d", &n);
int a[n];
for(int i=0;i<n;i++) {
scanf("%d", &a[i]);
}
int p[n];
for(int i=0;i<n;i++){
int k=1;
for(int j=0;j<n;j++){
if(i!=j) {
k=k*a[j]; }
}
p[i]=k;
}
for(int i=0;i<n;i++) {
printf("%d ",p[i]);
}
printf("\n");
return 0;
}

