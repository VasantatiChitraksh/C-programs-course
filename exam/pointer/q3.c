#include <stdio.h>
int main() {
int m=4;
int *p;
p=&m;
printf("The address of m using & operator is %p\n", &m);
printf("The address of m using * operator is %p\n", p);
printf("The value of m using & and * operator is m=%d\n", *&*p);
printf("The value of m using * operator is m=%d\n",*p);
return 0;
}
