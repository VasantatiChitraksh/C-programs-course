#include <stdio.h>
int main() {
int n;
printf("The no of terms in the fibonacci series are: ");
scanf("%d", &n);
int a=1,b=1;
printf("%d %d ", a,b);
for(int i=3;i<=n;i++) {
int nexterm=a+b;
a=b;
b=nexterm;
printf("%d ",nexterm);
}
}
