#include <stdio.h>
int main() {
int array[8],n,check=0;
printf("Enter the array: ");
for(int i=0; i<8; i++) {
		scanf("%d", &array[i]);
		}
for(int i=0; i<8; i++){
		printf("%d ", array[i]);
		}
	printf("\n");
printf("Enter a number: ");
scanf("%d" ,&n);
for(int i=0; i<8; i++) {
if(n==array[i]) { printf("The position of the number entered in the array is %d\n", i+1);
			check=1;
			}
			}
if(check==0) { printf(" -1 "); }
return 0; 
}
