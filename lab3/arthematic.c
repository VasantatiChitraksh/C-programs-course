#include <stdio.h>
int main() {
          int a, b, c, d, e, f, g;
	printf("Enter two numbers\n");
	printf("Enter first number:");
	scanf("%d", &a);
	printf("Enter second number:");
	scanf("%d", &b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("Sum:%d \n", c);
	printf("Difference:%d \n", d);
	printf("Product:%d \n", e);
	printf("Quotient:%d \n", f);
	printf("Remainder:%d \n", g);
	return 0;
 	}
