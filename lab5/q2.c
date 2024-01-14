#include <stdio.h>
int main() {
int a,b;
printf("Enter the lower value: ");
scanf("%d",&a);
printf("Enter the upper value: ");
scanf("%d",&b);
int i;
for(i=a ; i<b ; i++) {
if(((i%2==0) || (i%5==0)) && (i%10!=0)) { printf("%d," ,i);}
}
printf("\n");
}
