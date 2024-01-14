#include <stdio.h>
int main (){
 	float a, b, c;
	printf("Cost price of product:");
	scanf("%f", &a);
	printf("Seling price of product:");
	scanf("%f", &b);
	c=b-a;
	if (c>0) {
		printf("Profit is %f\n", c);
		}
	else if (c<0) { 
		printf("Loss is %f\n", -c);
		}
	else { printf("No profit or loss");}
	return 0;
	}
