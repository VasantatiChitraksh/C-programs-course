#include <stdio.h>
int main(){
int n;
printf("The no of elements in the array:");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n/2;i++){
	int temp=*(a+i);
    	*(a+i)=*(a+n-i-1);
    	*(a+n-i-1)=temp;
    		}
printf("The reversed array is:");
for(int i=0;i<n;i++){
printf("%d ",*(a+i));
}
printf("\n");
return 0;
}
