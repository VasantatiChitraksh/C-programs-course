#include <stdio.h>
int main () {
	int a, b=2, c;
	printf("Enter the number:");
	scanf("%d", &a);
	c=a%b;
	if (c==0) {
		printf("%d is even\n", a);
			}
	else {
 		printf("%d is odd\n", a);
		}
	return 0;
  }

