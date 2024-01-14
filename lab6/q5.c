#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int array[20];
int c1=0,c2=0,c3=0,c4=0,c5=0,i;
srand(time(0));
for(i=0; i<20; i++) {
array [i] = rand() % 5 + 1;
}
for(i=0; i<20; i++) {
printf("%d,", array[i]);
if(array[i]==1) { c1++ ;} 
else if(array[i]==2) { c2++ ;} 
else if(array[i]==3) { c3++ ;} 
else if(array[i]==4) { c4++ ;} 
else if(array[i]==5) { c5++ ;} 
}
printf("\nCount of 1 = %d \nCount of 2 = %d \nCount of 3 = %d \nCount of 4 = %d \nCount of 5 = %d \n", c1,c2,c3,c4,c5);
}
