#include <stdio.h>
int main() {
  	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	if (n>0) {
		printf("%d is positive\n", n);
		}
	else if (n==0) {
		printf("%d is zero\n", n);
		}
	else {
		printf("%d is negative\n", n);
		}
	return 0;
	}
