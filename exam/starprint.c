#include <stdio.h>
int main() {int n;
printf("Enter the no of lines:");
scanf("%d", &n);
int j=2*n/3;
if(n%3!=0){printf("Invalid input\n"); return 0;}

else{
for(int i=1; i<=n/3; i++){
for(int j=1; j<=5; j++) {printf("* ");}
printf("\n");
}
for(int i=(n/3)+1; i<=j; i++) {
for(int j=1; j<=3; j++) {printf(" ");}
for(int j=1; j<=3; j++) {printf(" *");}
printf("\n");}
}
for(int i=j+1; i<=n; i++){
for(int j=1; j<=5; j++) {printf("* ");}
printf("\n");
}
}

