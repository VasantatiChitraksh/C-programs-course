#include <stdio.h>
int main() {
int n,i;
printf("Enter the number: ");
scanf("%d", &n);
int temp=n,count=0;
while (temp>0) {
	temp /= 2;
	count++ ;}
int array[count];
for(i=count-1 ; i>=0; i--) {
int x;
x=n%2;
array[i]=x;
n /= 2;
}

for(i=0 ; i<count; i++) { 
printf("%d", array[i]); }
printf("\n");
}

