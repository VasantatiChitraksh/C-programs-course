#include <stdio.h>
int main() {
int n;
printf("The no is:");
scanf("%d",&n);
int temp=n,count=0;
for(;temp>0;){
temp/=10;
count++;
}
temp=n;
int sum=0;
for(int i=1;i<=count;i++){
int k=n%10;
int l=k;
for(int j=0;j<count-1;j++) {
k=k*l;
}
sum=sum+k;
n/=10;
}
if(sum==temp) {
printf("Armstrong number");
}
}

