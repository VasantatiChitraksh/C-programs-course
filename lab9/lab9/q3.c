#include <stdio.h>
int sum(int n) {
	int num=0;
	if(n==1){ return 1;
			}
	num=n+sum(n-1);
	return num;
	}
int main() {
int n;
printf("Enter the number:");
scanf("%d", &n);
int x=sum(n);
printf("The Sum is %d\n",x);
return 0;
}
	
