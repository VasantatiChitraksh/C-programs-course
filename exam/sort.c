#include <stdio.h>
int main() {
int n;
printf("The no of elements in the array:");
scanf("%d", &n);
int a[n],i;
printf("The array is \n");
for(i=0;i<n;i++) { 
scanf("%d", &a[i]);
}
int j;
for(j=0;j<n-1;j++) {
int check=0;
for(i=0;i<n-1-j;i++) {
if(a[i]>a[i+1]){ check=1;
		int temp=a[i+1];
		a[i+1]=a[i];
		a[i]=temp;
		}
	}
	if(check==0) { break; }
}
for(int k=0;k<n;k++) {
printf("%d ", a[k]);
}
printf("\n");
return 0;
}

