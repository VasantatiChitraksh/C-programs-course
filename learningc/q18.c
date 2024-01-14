#include <stdio.h>
int main() {
int n;
printf("The number of elements in array:");
scanf("%d", &n);
int array[n];
int i,count=0;
printf("The array is\n");
for(i=0;i<n;i++) {
scanf("%d", &array[i]);
}
for(i=1;i<n;i++){ if(array[i]<array[i+1] && array[i]<array[i-1]) { count++;
									continue; }
		 else if(array[i]>array[i+1] && array[i]>array[i-1]) {count++;
									continue; }
		 else {break;} }
for(i=0;i<count+2;i++) {
printf("%d,",array[i]);
}
printf("\n");
return 0;
}

				

