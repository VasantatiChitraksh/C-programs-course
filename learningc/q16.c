#include <stdio.h>
int main() {
int n,check=0;
printf("The number of elements in array A and B: ");
scanf("%d", &n);
int arraya[n],arrayb[n];
int i,j;
printf("The array A and B are\n");
for(i=0;i<n;i++) {
scanf("%d", &arraya[i]);
}
for(j=0;j<n;j++) {
scanf("%d", &arrayb[j]);
}
printf("The common elements in both the arrays are: ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){if(arraya[i]==arrayb[j]) {
check=1;
printf("%d ", arraya[i]); }
}
}
if(check==0){printf("There are no common elements between the arrays\n");}
return 0;
}
