#include <stdio.h>
int main() {
int n;
printf("The no of elements in the array:");
scanf("%d", &n);
int array[n];
printf("The array is\n");
for(int i=0; i<n; i++) {
scanf("%d", &array[i]);
}
for(int i=0;i<n;i++) { 
int check=0;
for(int j=0;j<n;j++) {
if(array[i]==array[j] && i!=j) { check=1;
				break;}
}
if(check==0) { printf("%d ", array[i]);
}
}
printf("\n");
return 0;
}
