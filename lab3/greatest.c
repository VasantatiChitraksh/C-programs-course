#include <stdio.h>
int main () {
          int greatest=0;
	  int smallest=0;
	  int x;
	int i;
	  for (i=0;i<5;i++) 
{ printf("Enter the number:");
				scanf("%d", &x);
				if (i==0) { greatest=smallest=x; }
				else if (x>greatest) { greatest=x; }
				else if (x<smallest) { smallest=x; }
			}
	printf("The greatest of the five numbers is %d\n", greatest);
	printf("The smallest of the five numbers id %d\n", smallest);
	return 0;
	}  
                             
