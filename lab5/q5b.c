#include <stdio.h>
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
int sum=0;
while(n>10){
for(;n>0;){
sum+=n%10;
n/=10;
}
n=sum;
sum=0;
}
printf("The single digit sum is %d\n", n);
return 0;
}
