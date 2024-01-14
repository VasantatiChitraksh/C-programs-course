#include <stdio.h>
int main() {
int n;
printf("Enter the number:");
scanf("%d",&n);
int sum=0,check=0;
for(int i=0;i<n;i++) {
sum+=i;
if(sum==n){check=1;
	break;}
else if(sum>n){printf("Not a triangular number\n");
			return 0;
			}
else { continue; }
}
if(check==1) {printf("the number is triangular");
			}
			return 0;
			} 
