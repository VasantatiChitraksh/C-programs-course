#include <stdio.h>
int main() {
int a,b;
int max=0,temp;
printf("Enter two numbers:");
scanf("%d", &a);
scanf("%d", &b);
for(int i=1; i<=a ; i++) {
if((a%i==0) && (b%i==0)){ temp=i; }
if(max<temp) { max=temp ; }
}
printf("%d\n" ,max);
return 0;
} 
