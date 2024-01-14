#include <stdio.h>
int fac(int n){ int p=1;
		for(int i=1;i<=n;i++){
		p=p*i;
		}
		return p;
		}
float comb(int n,int r){ float c;
			c=fac(n)/(fac(n-r)*fac(r));
			return c;
			}
float per(int n,int r){ float p;
			p=comb(n,r)*fac(r);
			return p;
			}
int main(){
int n,r;
printf("Enter the values of n and r:");
scanf("%d",&n);
scanf("%d",&r);
float p=per(n,r);
float c=comb(n,r);
printf("The no fo permutations and combinations are %f and %f\n",p,c);
return 0;
}
