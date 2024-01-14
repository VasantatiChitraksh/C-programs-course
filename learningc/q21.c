#include <stdio.h>
int main() {
int n,m;
printf("The number of elements in array A: ");
scanf("%d", &n);
printf("The number of elements in array B: ");
scanf("%d", &m);
int arraya[n],arrayb[m];
int i,j;
printf("The array A and B are\n");
for(i=0;i<n;i++) {
scanf("%d", &arraya[i]);
}
for(j=0;j<m;j++) {
scanf("%d", &arrayb[j]);
}
int out[n];
int a=0,k=0,check;
printf("The common elements in both the arrays are: ");
for(i=0;i<n;i++){
for(j=0;j<m;j++){if(arraya[i]==arrayb[j]) {     check=0;
						 for(k=0;k<a;k++) { if(out[k]==arraya[i]) { check=1;
break; } }
						if(check==0){out[a]=arraya[i];
						a++; }
} }
}
int i1;
for(i1=0;i1<a;i1++) {
printf("%d ", out[i1]);
}
printf("\n");
}
