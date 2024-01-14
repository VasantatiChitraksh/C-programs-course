#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int marks[101]={0};
int n;
printf("The no of students in the exam:");
scanf("%d", &n);
srand(time(0));
for(int i=0;i<n;i++) {
	int mark=rand() % 100 + 1;
	marks[mark]++;
	}
for(int i=0;i<101;i++) {
printf("%d:%d ",i,marks[i]);
printf("\n");
                    }
          return 0;
          }
