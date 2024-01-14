#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int n;
printf("The no of elements in the array:");
scanf("%d",&n);
int a[n];
srand(time(0));
for(int i=0;i<n;i++) {
a[i]=rand() % 101;
}
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
for(int i=0;i<(n/2);i++) {
int temp=a[n-i-1];
a[n-i-1]=a[i];
a[i]=temp;
}
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
