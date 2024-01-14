#include <stdio.h>
int main(){
int a[10];
printf("The array elements are:");
for(int i=0;i<10;i++){
	scanf("%d",&a[i]);
		}
int *p[10];
for(int i=0;i<10;i++){
	p[i]=&a[i];
			}
int *max=p[0];
int *min=p[0];
for(int i=0;i<10;i++) {
	if(*max<*p[i]){
		max=p[i];
			}
	if(*min>*p[i]){
		min=p[i];
			}
				}
printf("THE MAX IN THE ARRAY IS %d\nTHE MIN IN THE ARRAY IS %d\n",*max,*min);
return 0;
}
