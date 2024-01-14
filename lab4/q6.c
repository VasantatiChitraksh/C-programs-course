#include <stdio.h>
int istriangular(int num) {
	int sum=0;
	int i=1;
	while (sum<num) {
	sum += i;
	i++;
	}
	return (sum==num);
	}
 
int main() { int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if (istriangular(n)) { printf("%d is a triangular number.\n", n);}
	else { printf("%d is not a triangular number.\n", n);}
	return 0;
	} 
