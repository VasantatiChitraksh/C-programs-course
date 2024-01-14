#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int n;
printf("the no of elements in the array are:");
scanf("%d",&n);
srand(time(0));
int a[n];
for(int i=0;i<n;i++) {
a[i]=rand() %10; 
}
for(int i=0;i<n;i++) {
printf("%d ",a[i]); }
printf("\n");
int k=0;
for(int i=0;i<n;i++) {
int check=0;
for(int j=0;j<n;j++) {
if(a[i]==a[j] && i!=j){
check=1;
break;
}
}
if(check==0) {
a[k++]=a[i]; }
}
for(int i=0;i<k;i++) {
printf("%d ",a[i]); }
printf("\n");
}
