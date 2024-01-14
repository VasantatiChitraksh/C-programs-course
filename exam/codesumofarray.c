#include <stdio.h>
int main() {
int array[7];
int sum;
printf("Enter the numbers to fill the array: \n");
for(int i=0; i<7; i++) {
scanf("%d", &array[i]);
sum += array[i];
}
printf("The sum of digits in the array is %d\n", sum);
}
