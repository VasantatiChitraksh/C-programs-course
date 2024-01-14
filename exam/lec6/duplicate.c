#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
int a[n];
printf("Enter the array:");
for(int i=0;i<n;i++) {
scanf("%d", &a[i]);
}
int i=0,count=0;
for(int j=0;j<n-1;j++) {
if( a[j] != a[j+1] ){
a[i++]=a[j];
count++;
}
}
a[i++]=a[n-1];
for(int j=0;j<count+1;j++) {
printf("%d ",a[j]);
}
printf("\n");
return 0;
}
