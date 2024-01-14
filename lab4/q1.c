#include <stdio.h>
int main() {
int n;
int a=0,b=1;
printf("Enter the no of terms in series: ");
scanf("%d", &n);
printf("%d,%d,",a,b);
int nextterm;
int i;
for(i=3; i<=n; i++) {
nextterm=a+b;
a=b;
b=nextterm;
printf("%d,", nextterm);
}
printf("\n");
return 0;
}
