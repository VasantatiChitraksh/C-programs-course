#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int n;
printf("The no fo elements in the array:");
scanf("%d", &n);
int a[n];
srand(time(0));
for(int i=0;i<n;i++) {
a[i]=rand() % 3;
}
int count[3];
for(int i=0;i<n;i++){
count[a[i]]++;
}
int k=0;
for(int i=0;i<3;i++){
for(int j=0;j<count[i];j++){
a[k++]=i;
}
}
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
