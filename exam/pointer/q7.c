#include <stdio.h>
int factorial(int *p){
for(int i=(*p-1);i>0;i--){
*p=*p*i;
}
return *p;
}
int main(){
int n;
scanf("%d", &n);
factorial(&n);
printf("The factorial is %d\n", n);
return 0;
}
