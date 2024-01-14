#include <stdio.h>
int main() {
int sum;
printf("Enter the numbers: ");
int i;
for(i=1; i<=10 ;i++) {
int x;
scanf("%d", &x);
if (x%10==0) {break;}
sum += x;
}
printf("=%d\n", sum);
}
