#include <stdio.h>
#include <limits.h>
void findMaxMinArray(int s,int a[s],int *max,int *min){
		for(int i=0;i<s;i++){
			if(*max<*(a+i)){
				*max=*(a+i);
					}
			if(*min>*(a+i)){
				*min=*(a+i);
					}
						}
								}
int main(){
int max=INT_MIN,min=INT_MAX,n;
printf("The no of elements in the array:");
scanf("%d",&n);
int arr[n];
printf("The array is:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
   }
findMaxMinArray(n,arr,&max,&min);
printf("THE MAX IS %d\nTHE MIN IS %d\n",max,min);
return 0;
}

