#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int array[100];
srand(time(0));
for(int i=0; i<100; i++) {
	array[i]= rand() % 100;
	}
int count=0;
for(int i=0; i<100; i++) {
if(array[i]%2==0) { count++; }
}
printf("The no of even numbers is %d\n", count);
}
