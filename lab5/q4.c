#include <stdio.h>
int main() {
int n;
printf("Enter the positive number: ");
scanf("%d", &n);
int temp=n,c;
while(temp>0) {temp/=10;
		c++; }
temp=n;
int pow=1;
for(int i=1;i<c;i++) { pow=pow*10;}
for(int i=0; i<c; i++) {
	int rem=n%10;
	n=(rem*pow)+n/10;
	printf("%d,", n);
	}
	//printf("%d\n", temp);
	}

