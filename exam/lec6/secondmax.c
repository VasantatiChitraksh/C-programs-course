#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int n;
printf("Enter the no of elements in the array:");
scanf("%d",&n);
int a[100];
srand(time(0));
for(int i=0;i<n;i++) {
a[i]=rand() % 100;
}
for(int i=0;i<n;i++) {
printf("%d ",a[i]);
}
printf("\n");
int max=0,secondmax=0;
for(int i=0;i<n;i++) {
if(a[i]>max) {
secondmax=max;
max=a[i];
}
else if(a[i]>secondmax && a[i]<max) {
secondmax=a[i];
}
}
printf("The second maximum is %d\n", secondmax);
return 0;
}
