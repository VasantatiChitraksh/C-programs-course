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
int check=0;
for(int i=0;i<n;i++) {
if(array[i]==array[n-i-1]){continue;}
else if(array[i] != array[n-i-1]){check=1; break;}
}
if(check==1){printf("The array is not a palindrome\n");}
else{printf("The array is a palindrome\n");}
return 0;
}

