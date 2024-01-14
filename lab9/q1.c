#include <stdio.h>
int getPrevPrime(int n){int x;
	for(int i=n-1;n>1;i--){
	int check=0;
	if(i==2){ x=2; 
			break; }
	for(int j=2;j<i;j++){
	if(i%j==0){ check=1;
		    break; }
	}
	if(check==0){x=i;
			break;}
	}
	return x;
		}
int getNextPrime(int n){int x;
	for(int i=n+1; ;i++){
	int check=0;
        if(i==2){ x=2; 
			break; }
	else if(i==1){ x=2; 
			break;}
	for(int j=2;j<i;j++){
	if(i%j==0){ check=1;
		    break; }
	}
	if(check==0){x=i;
			break;}
	}
	return x;
	}
int main(){
int n,x;
printf("Enter a number:");
scanf("%d", &n);
if(n==0 || n==1 || n==2){ printf("No previous prime exists.\n");
			 x=getNextPrime(n);
				printf("Next Prime=%d\n",x);
			return 0;		 }
else if(n>2){
x=getNextPrime(n);
int y=getPrevPrime(n);
printf("Next Prime=%d\n",x);
printf("Previous Prime=%d\n",y);
			return 0;}
}	
