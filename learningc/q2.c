#include <stdio.h>
int main() {
int array[8],min,max;
printf("Enter the array: ");
for(int i=0; i<8; i++) {
		scanf("%d", &array[i]);
		}
for(int i=0; i<8; i++){
		printf("%d ", array[i]);
		}
	printf("\n");
min=array[0];
max=array[0];
for(int i=1; i<8; i++) {
	if(array[i]<min) { min=array[i]; }
	else if(array[i]>max) { max=array[i]; }
	}
printf("The maximum difference between 2 numbers in the array is %d\n", max-min);
return 0;
}
