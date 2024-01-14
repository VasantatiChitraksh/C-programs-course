#include <stdio.h>
int main () {
             int n, m, i, d;
             printf("Enter the nth table number:");
		scanf("%d", &n);
	     printf("Enter the 'm' no of rows:");
		scanf("%d", &m);	
             for (i=0; i<=m; i++) {d=n*i;
  				printf("%d*%d=%d\n", n, i, d);
					}
	return 0;
			}
