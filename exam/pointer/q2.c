#include <stdio.h>
int main() {
int a=29;
int * p;
p=&a;
printf("The value of a is %d\n", *p);
printf("The adress of a is given by &a or p which is %p\n",p);
*p+=5;
printf("The changed value of a is %d\n", a);
return 0;
}
