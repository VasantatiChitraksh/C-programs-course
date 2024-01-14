#include <stdio.h>
int main() {int n;
   printf("Enter the no of stars in the last row: ");
	scanf("%d", &n);
int i,j,s;
for(i=0;i<=n;i++) { for(s=n ; s>i ;s--){
			printf(" "); }
		for( j=0; j<i;j++) {
	printf("*");}
		printf("\n"); }
		return 0; 
		}
