#include <stdio.h>
int main() {
int n;
int x;
printf("Enter the no and the range of table:");
scanf("%d", &x);
scanf("%d", &n);
for(int i=1;i<=n;i++) {
printf("%d*%d=%d\n",x,i,x*i);
}
return 0;
}
