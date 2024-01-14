#include <stdio.h>
int main() {
int n,m;
int i,j;
printf("The no of elements in each array: ");
scanf("%d",&n);
scanf("%d",&m);
int a[n],b[m];
printf("The array1 is:\n ");
for(i=0; i<n; i++) {
scanf("%d",&a[i]);
}
printf("The array2 is:\n ");
for(j=0;j<m;j++) {
scanf("%d",&b[j]);
}
i=0; j=0;
int c[n+m];
int k=1;
for(;i<n;){
for(;j<n;) {
if(b[j]>a[i]) {  c[k++]=a[i++];
		 }
else { 	c[k++]=b[j++]; }
if(i==n || j==m) { break; }
}
}
while(i<n) { c[k++]=a[i++]; } 
while(j<m) { c[k++]=b[j++]; }
for(int l=1;l<k;l++) { 
printf("%d ", c[l]);
}
printf("\n");
return 0;
}



