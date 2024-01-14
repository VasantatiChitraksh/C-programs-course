#include <stdio.h>
int main() {
int n,max;
printf("The no of papers published by the author: " );
scanf("%d", &n);
int array[n],i;
printf("Enter the no of citations received by eachpaper: ");
for(i=0; i<n; i++) {
scanf("%d", &array[i]);
}
int check=0,count,x,j;
for(i=0; i<10 ; i++) {
if(array[i]>max){ max=array[i]; }
}
for(j=1; j<max; j++){
count=0;
for(i=1; i<n; i++) {
if(array[i]>j){ count++ ;}
}
if(count < j) { x=j;
		break;}	
}
printf("h-index is %d\n" , x);
}
