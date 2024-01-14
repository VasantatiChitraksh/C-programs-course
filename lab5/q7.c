#include <stdio.h>
int main () {
int n=0;
printf("Enter the number: ");
scanf("%d", &n);
if(n<=0) {printf("Invalid Input\n");
		return 1;}
int i;
for(i=1; i<=n ; i++) { int k=n%i;
if((k==0) && (i<n)){ 
printf("%d,", i);}
else if((k==0) && (i=n)){printf("%d\n", i);}
}
}
