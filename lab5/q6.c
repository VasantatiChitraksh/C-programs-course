#include <stdio.h>
int main() {
int n,check=0;
printf("Enter the positive number: ");
scanf("%d", &n);
int temp=n,c;
if(n%2==0) { printf("The given no %d is not a prime so it is not a circular prime.\n", temp);
			return 0; }
for(int i=3; i<n; i++) { if(n%i==0) { check=1;
					break;}}
if(check==1){printf("The given no %d is not a prime so it is not a circular prime.\n", temp); }
else if(check==0){
while(temp>0) {temp/=10;
		c++; }
temp=n;
int pow=1;
for(int i=1;i<c;i++) { pow=pow*10;}
for(int i=1; i<c; i++) {
	int rem=n%10;
	n=(rem*pow)+n/10;
for(int i=3; i<n; i++) { if(n%i==0){check=1;
					break;} }
if(check==1){printf("The no %d is not a circular prime because %d is not a circular prime.\n", temp,n);
			return 0; }
	
	}
	}
if(check==0) {printf("The given no %d is a circular prime.\n", temp); }
}
