#include <stdio.h>
int ArraySum(int A[],int size) {
			int sum=0;
			if(size==0) {
				return A[0];
					}
			sum = A[size] + ArraySum(A,size-1);
			return sum;
					}
int main(){
int n;
printf("The size of the array is:");
scanf("%d", &n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d", &a[i]);
				}
int x=ArraySum(a,n-1);
printf("The sum of the elements in the array is %d\n",x);
return 0;
}
