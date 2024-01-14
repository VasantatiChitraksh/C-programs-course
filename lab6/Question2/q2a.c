#include <stdio.h>
int main() {
int array[10];
printf("Enter the marks: ");
int i;
for(i=0;i<10;i++){ 
scanf("%d", &array[i]);
}
int max,min,count;
float avg;
min=array[0];
max=array[0];
for(i=0; i<10 ; i++) {
if(array[i]>max){ max=array[i]; }
else if(array[i]<min) { min=array[i]; }
avg+=array[i];
}
float mean=avg/10;
for(i=0; i<10; i++) {
if(array[i] > mean) { count++ ; }
}
printf("The maximum marks obtained are %d\n", max);
printf("The minimum marks obtained are %d\n", min);
printf("The avg marks are %f\n", avg/10);
printf("The no of students who scored above avg are %d\n", count);
}
			

