#include <stdio.h>
int main() {
int n;
printf("The no of elements in the array:");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++) {
scanf("%d", &a[i]);
}
int k=0;
for(int i=0;i<n;i++){
if(a[i]!=0) { a[k++]=a[i]; }
}
while(k<n) {
a[k++]=0;
}
for(int i=0;i<n;i++) {
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
