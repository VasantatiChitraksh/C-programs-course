//pointer variables for sum
#include <stdio.h>
int main() {
int a=5;
int b=6;
int * p;
int * q;
p=&a; q=&b;
printf("The sum of the entered numbers is %d\n", *p+*q);
return 0;
}
