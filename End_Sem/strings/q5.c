#include <stdio.h>
#include <string.h>
int main(){
char s[100];
printf("Input:");
scanf("%s", s);
int n=strlen(s);
int cmax=0;
char max;
for(int i=0;i<n;i++){
	int count=0;
for(int j=0;j<n;j++){
	if(s[i]==s[j]){
		count++;
		}
	}
	if(cmax<count){
		cmax=count;
		max=s[i];
		}
	}
printf("The max is %c and it is occuring %d times\n", max,cmax);
return 0;
}
