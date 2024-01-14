#include <stdio.h>
int main () {
	printf("Perimeter of a rectangle is 2*(length + breadth),\n Area of rectangle is (length*breadth)\n\n ");
	float l, b, p, a;
	printf("Length of the rectangle:");
	scanf("%f", &l);
	printf("Breadth of the triangle:");
	scanf("%f", &b);
	p=2*(l+b);
	a=l*b;
	printf("Perimeter of rectangle is %f \n Area of rectangle is %f \n", p, a);
	return 0;
	}
