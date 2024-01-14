#include <stdio.h>
int main() {
int n;
printf("The no of elements in the array:");
scanf("%d", &n);
int array[n];
printf("The array is\n");
for(int i=0; i<n; i++) {
scanf("%d", &array[i]);
}
int check=0,sum=0;
for(int i=0;i<n;i++) { 
for(int j=0;j<n;j++) {
if(array[i]==array[j] && i!=j) { check=1;
				break;}
}
sum=check;
check=0;
if(sum==0) { printf("%d ", array[i]);
}
}
printf("\n");
return 0;
}
