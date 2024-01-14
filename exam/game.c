#include <stdio.h>
#include <time.h>
int main() {
srand(time(NULL));
int x= rand() %20 + 1;
int n,guessno,check=0;
printf("The no of guesses you want to have:");
scanf("%d", &guessno);
for (int i=1;i<=guessno;i++) {
		printf("A no between 1 to 20:");
		scanf("%d", &n);
		printf("\n");
		if (n==x) { printf("YOU WIN INKA POYI PADUKO\n");
				check=1;
				break;}
		}
		if (check==0) {printf("YOU LOSE\n");
		}
		return 0;
		} 
