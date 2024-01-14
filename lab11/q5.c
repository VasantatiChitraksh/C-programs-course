#include <stdio.h>
int main(){
int n;
printf("The no of elements in the array are:");
scanf("%d",&n);
int a[n];
printf("The array is:");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
                   }
int sum=0;
for(int i=0;i<n;i++){
sum+=*(a+i);
}
double mean=sum/n;
printf("The mean is %lf\n",mean);
int mode;
int max=0;
for(int i=0;i<n;i++){
		int count=0;
       for(int j=0;j<n;j++){
    		if(*(a+i)==*(a+j))
    			{
    				count++;
			   			}
		}
 	if(max<count){
 		max=count;
 		mode=*(a+i);
 			}
 }
printf("The mode is %d\n",mode);
return 0;
}

