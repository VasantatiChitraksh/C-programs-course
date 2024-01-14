#include <stdio.h>
#include <string.h>
int issubstring(char *s,char *p){
	int n=strlen(s);
	int m=strlen(p);
	for(int i=0;i<n-m;i++){
	int j;
	for(j=0;j<m;j++){
	if(s[i+j]!=p[j]){
		break;
		}
	}
	if(j!=m){
		return 0;
		}
	if(j==m){
		return 1;
		}
			}
				}
int main(){
char s[100];
char p[20];
printf("Input:");
scanf("%s", s);
scanf("%s", p);
if(issubstring(s,p)){
	printf("Yes Substring\n");
	}
else{
	printf("Not Substring\n");
	}
return 0;
}
