#include <stdio.h>
#include <math.h>
int isarmstrong(int num) {
	int orginalNum=num;
	int digitNum=0;
	int sum=0;

	while(num>0) {
	num /= 10;
	digitNum++;
	}
	
	num=orginalNum;
	while(num>0) {
	int digit=num%10;
	sum += pow(digit,digitNum);
	num /= 10;
	}
	return (sum==orginalNum);
	}
	
	int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if (isarmstrong(n)) {
	printf("The Number %d is an armstrong number\n",n);
	}
	else {printf("%d is not a armstrong number\n", n);
	}
	return 0;
	}





		
