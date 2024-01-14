#include <stdio.h>
int main() {
int array[10];
printf("Enter the intgers: ");
int i;
for(i=0;i<10;i++){ 
scanf("%d", &array[i]);
}
int a,check=0;
printf("Enter another number: ");
scanf("%d", &a);
for(i=0; i<10; i++) {
if(a==array[i]) {printf("The number entered already exists in the array\n");
	check=1;
		break;}
else { continue;}
}
if(check==0){printf("The number dosent exist in the array\n");}
return 0;
}


