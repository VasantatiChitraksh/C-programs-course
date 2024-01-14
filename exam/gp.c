#include <stdio.h>
int main() {
int n;
printf("Enter the no of terms in gp:");
scanf("%d" ,&n);
int firstterm=2;
int commondiff=5;
printf("\n%d", firstterm);
for(int i=2;i<=n;i++){
int nextterm=firstterm*commondiff;
firstterm=nextterm;
if(i<n){
printf(",%d", nextterm);}
else {printf(",%d.\n" ,nextterm);}
}
}
