#include <stdio.h>
int main() {
int n,temp;
printf("Enter a positive number: ");
scanf("%d", &n);
temp=n;
if(n<10) {printf("%d\n",n);
		return 0;}
for(;n>=10;) {  int sum=0;
		for(;n>0;) {
		int digit=n%10;
		sum=sum+digit;
		n=n/10;
		}
		n=sum;
		if(n<10) {break;}
		}
printf("The Single number sum is %d\n", n);
		}
		
		
