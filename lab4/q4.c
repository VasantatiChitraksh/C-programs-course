#include <stdio.h>
int factorial(int num) {
	int result=1;
	int i;
	for(i=1; i<=num; i++) {
	result *= i;
	}
	return result; }

int main() { 
	int n,sum=0;
	printf("Enter the no of terms in series: ");
	scanf("%d", &n);
	printf("Series: ");
	int i;
	for(i=1;i<=n;i++) {
	int term;
	term=factorial(i);
	sum += term;
	printf("%d", term);
	if(i<n) {
	printf(" + ");
	}
	}
	printf("= %d \n",sum);
	return 0;
	}
