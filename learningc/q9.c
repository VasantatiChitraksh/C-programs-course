#include <stdio.h>
int main() {
int array[5],runningsum[5],sum=0;
printf("Enter the array: ");
for(int i=0; i<5; i++) {
		scanf("%d", &array[i]);
		}
for(int i=0; i<5; i++) {
for(int j=0; j<=i; j++) {
sum += array[j] ;
}
runningsum[i]=sum;
sum=0;
}

for(int i=0; i<5 ; i++) {
printf("%d ", runningsum[i]);
}
printf("\n");
return 0;
}
