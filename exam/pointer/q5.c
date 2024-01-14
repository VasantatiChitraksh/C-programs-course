#include <stdio.h>
long sumofnums(long *p,long *q){
		long sum;
		sum=*p+*q;
		return sum;
		}
int main() {
long a,b;
printf("Enter the first number:");
scanf("%ld",&a);
printf("Enter the second number:");
scanf("%ld",&b);
long sum;
sum = sumofnums(&a,&b);
printf("The sum is %ld\n",sum);
}
