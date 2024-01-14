#include <stdio.h>
int isMagicSquare(int arr[3][3]){
			int sum=0;
			int check=0;
			for(int i=0;i<3;i++){
			sum+=arr[i][0];
						}
			for(int k=0;k<3;k++){
			int sum2=0;
			for(int j=0;j<3;j++){
			sum2+=arr[j][k];
						}
			if(sum2 != sum){ check=1;
					return 0;
			}
				}
			for(int k=0;k<3;k++){
			int sum2=0;
			for(int j=0;j<3;j++){
			sum2+=arr[k][j];
						}
			if(sum2 != sum){ check=1;
					return 0;
			}
				}
			int sum2=0;
			for(int k=0;k<3;k++){
			sum2+=arr[k][k];
								}
			if(sum2!=sum){ check=1;	
						return 0;
						}
			int sum3=arr[0][2]+arr[1][1]+arr[2][0];
			if(sum3!=sum){ check=1;
						return 0;
						}
			if(check==0) {
			return 1;
			}
							}
int main() {
int arr[3][3];
printf("Enter the Matrix\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
scanf("%d", &arr[i][j]);
}
	}
int check=isMagicSquare(arr);
if(check==1){ printf("It is Magic Square\n"); }
else if(check==0) { printf("It is not a magic Square\n"); }
return 0;
}
