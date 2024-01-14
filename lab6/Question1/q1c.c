#include <stdio.h>
int main() {
int array[10];
printf("Enter the intgers: ");
int i;
for(i=0;i<10;i++){ 
scanf("%d", &array[i]);
}
int a,check=0,position;
printf("Enter another number: ");
scanf("%d", &a);
for(i=0; i<10; i++) {
if(a==array[i]) {printf("The number entered already exists in the array\n");
	check=1;
        position=i+1;
	break;}
else { continue;}
}
if(check==0){printf("-1\n");}
else if(check==1) {printf("The position in the array is %d\n", position);}
return 0;
}


