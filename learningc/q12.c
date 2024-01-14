#include <stdio.h>
#include <stdlib.h>
int main() {
int n,sum=0;
printf("The no of elements in the array:");
scanf("%d", &n);
int array[n];
printf("The array is:");
for(int i=0; i<n; i++) {
scanf("%d", &array[i]);
}
for(int i=1; i<n; i++) {
sum+= abs(array[i]-array[i-1]);
}
printf("%d\n",sum);
float avg=(sum/(n-1));
printf("The avg of differences is %f\n", avg);
}

