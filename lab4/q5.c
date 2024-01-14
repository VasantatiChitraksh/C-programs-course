#include <stdio.h>
int ispalindrome(int num) {
int orginalNum=num;
int reversedNum=0;

while (num>0) {
	int digit=num%10;
	reversedNum=reversedNum*10+digit;
	num /=10;
	}
return ( orginalNum==reversedNum );
}
 int main() {int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	if ( ispalindrome(n) ) { 
	printf("The number %d is a palindrome.\n", n);
	}
	else {
	printf("The number %d is not a palindrome.\n", n);
	}
	return 0;
	} 
