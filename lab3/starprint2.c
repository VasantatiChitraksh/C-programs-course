#include <stdio.h>
int main() {int n;
   printf("Enter the no of stars in the last row: ");
	scanf("%d", &n);
int i,j,s;
for(i=0;i<=n;i++) { for(j=n ; j>i ;j--){
			printf("* "); }
		/*for( s=0; s<i;s++) {
	printf(" ");}*/
		printf("\n"); }
		return 0; 
		}
		
