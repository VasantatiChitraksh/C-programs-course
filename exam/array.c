#include <stdio.h>
int main() {
int array[10];
printf("Enter the numbers to fill the array: \n");
for(int i=0; i<10; i++) {
	scanf("%d", &array[i]);
	}
for(int i=0; i<10; i++) {if(i<9){
	printf("%d,", array[i]);
	}
	else if(i=9) {printf("%d\n", array[i]);
	}
	}}
