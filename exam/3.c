#include <stdio.h>
int main() {int n,i,j,s;
           printf("Enter the no of stars in first row:");
           scanf("%d", &n);
           for (i=0; i<=n; i++) { 
           for(j=n ; j>=i ; j--){
           printf("*"); }
           for(s=0 ; s<i ; s++) {
           printf(" "); }
           printf("\n");
           }
           return 0;
           }
           
