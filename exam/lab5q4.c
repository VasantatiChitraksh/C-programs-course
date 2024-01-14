#include <stdio.h>
int main() {
int n;
printf("Enter the number:");
scanf("%d", &n);
int temp=n,count;
for(;temp>0;){
count++;
temp/=10;
}
temp=n;
int pow=1;
for(int i=1;i<count;i++) {
pow=pow*10;
}
for(int i=0;i<count;i++) {
int digit=n%10;
int quo=n/10;
n=(pow*digit)+quo;
printf("%d,", n);
}
printf("\n");
return 0;
}
