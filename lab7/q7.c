#include <stdio.h>
int main() {
int n;
printf("The no of elements in the array are:");
scanf("%d",&n);
int a[n],b[n];
printf("The arrays are:");
for(int i=0;i<n;i++) {
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++) {
scanf("%d",&b[i]);
}
int c[2*n],k=0;
for(int i=0;i<n;i++) {
for(int j=0;j<n;j++) {
int check=0;
for(int l=0;l<2*n;l++) {
if(c[l]==a[j]) { check=1;
		break; }
}
if(check==0) {
c[k++]=b[j]; }
}
c[k++]=a[i];
}
for(int j=0;j<n;j++) {
int check=0;
for(int l=0;l<2*n;l++) {
if(c[l]==b[j]) { check=1;
		break; }
}
if(check==0) {
c[k++]=b[j]; }
}
for(int i=0;i<k;i++) {
printf("%d ",c[i]);
}
printf("\n");
return 0; 
}
