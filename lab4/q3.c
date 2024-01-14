#include <stdio.h>
int isprime(int n) {int i;
		for(i=2; i<=n-1; i++) {
		if (n%i==0) {
		return 0;
      		}
		}
return 1;
}

int main() {
	int n1,n2;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);
	printf("The prime numbers between %d and %d are: ", n1,n2);
	int i;
	for (i=n1; i<=n2; i++) {
	if (isprime(i)) {
	printf("%d,", i);}
		}
	printf("\n");
	return 0;
	}
