#include <stdio.h>
int main() {
int array[10];
printf("Enter the intgers: ");
int i;
for(i=0;i<10;i++){ 
scanf("%d", &array[i]);
}
for(i=0;i<10;i++) {
if(i<9){printf("%d,", array[i]);}
else if(i==9) { printf("%d.\n", array[i]);}
}
}

