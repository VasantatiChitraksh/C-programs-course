#include <stdio.h>
int main() {
int n;
printf("The no of elements in the array:");
scanf("%d", &n);
int a[n],i,j;
printf("The array is \n");
for(i=0;i<n;i++) { 
scanf("%d", &a[i]);
}
int k=n;
int ans[n];
int max=0;
for(j=0;j<n;j++) {
int p;
for(i=0;i<n;i++) {
if(a[i]>max) { max=a[i]; 
		p=i;
		}
}
a[p]=0;
ans[--k]=max;
max=0;
}
for(j=0;j<n;j++) {
printf("%d ", ans[j]);
}
printf("\n");
return 0;
}
