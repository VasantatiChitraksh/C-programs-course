#include <stdio.h>
int main() {
int array[5],n,check=0;
printf("Enter the array: ");
for(int i=0; i<5; i++) {
		scanf("%d", &array[i]);
		}
for(int j=5; j>0; j--) {
for(int i=0; i<j; i++) {
printf("%d ",array[i]);
}
printf("\n");
}
return 0;
}
