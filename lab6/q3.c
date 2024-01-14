#include <stdio.h>
int main() {
int n,s;
printf("The no of Digits in the array is: " );
scanf("%d", &n);
int array[n],i,j,check=0;
printf("Enter the digits in the array: ");
for(i=0; i<n; i++) {
scanf("%d", &array[i]);
}
printf("Enter a number: ");
scanf("%d", &s);
for(j=0;j<n;j++){
for(i=0;i<n;i++){
		if(array[j]+array[i]==s && array[j] != array[i] ) { check=1;
					  printf("The sum of %d and %d in the array is equal to %d\n", array[j],array[i],s); 
					  return 0; }
		else { continue; }
		}
		}
		if(check==0) { 		printf("No pair exists\n");
					for(i=0; i<n; i++){
					printf("%d ", array[i]); }
					}
					printf("\n");		
		return 0;
		}
