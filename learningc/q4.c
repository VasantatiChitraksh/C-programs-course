#include <stdio.h>
int main() {
int array[8],even,odd;
printf("Enter the array: ");
for(int i=1; i<=8; i++) {
		scanf("%d", &array[i]);
		}
for(int i=1; i<=8; i++){
		printf("%d ", array[i]);
		}
	printf("\n");
for(int i=1; i<=8; i++) {
if(i%2==0) { even+=array[i]; }
else if(i%2==1) { odd+=array[i]; }
}
printf("Sum of even indexed:%d\n" , even);
printf("Sum of odd indexed:%d\n" , odd);
}
