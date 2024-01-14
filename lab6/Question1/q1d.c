#include <stdio.h>
int main() {
int array[10],check=0;
printf("Enter the intgers: ");
int i;
for(i=0;i<10;i++){ 
scanf("%d", &array[i]);
}
for(i=0;i<8;i++) {
if(array[i+1]>=array[i] && array[i+2]>array[i+1]) { check =0; 
			continue; }
else if(array[i+1]<=array[i] || array[i+2]<=array[i+1]) { check=1; 
	break; }
}
if(check==0) { printf("The array is in ascending order\n" );}
else if(check==1) {printf("The array is not in ascending oredr\n" ); }
}

