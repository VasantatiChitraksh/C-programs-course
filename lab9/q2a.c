#include <stdio.h>
int main(){
int n;
int check=0;
printf("Enter a number:");
scanf("%d", &n);
if(n<100 && n>0) {
	switch(n/10){
		case 1:	
		check=1;
		switch(n%10){
			case 0:
			printf("Ten\n");
			break;
			
			case 1:
			printf("Eleven\n");
			break;
			
			case 2:
			printf("Twelve\n");
			break;
			
			case 3:
			printf("Thirteen\n");
			break;
			
			case 4:
			printf("Fourteen\n");
			break;
			
			case 5:
			printf("Fifteen\n");
			break;
			
			case 6:
			printf("Sixteen\n");
			break;
			
			case 7:
			printf("Seventeen\n");
			break;
			
			case 8:
			printf("Eighteen\n");
			break;
			
			case 9:
			printf("Nineteen\n");
			break;
			}
		case 2:
		printf("Twenty ");
		break;
		
		case 3:
		printf("Thirty ");
		break;
		
		case 4:
		printf("Fourty ");
		break;
		
		case 5:
		printf("Fifty ");
		break;
		
		case 6:
		printf("Sixty ");
		break;
		
		case 7:
		printf("Seventy ");
		break;
		
		case 8:
		printf("Eighty ");
		break;
		
		case 9:
		printf("Ninety ");
		break;
		}
	if(check==0){
		switch(n%10){
			case 0:
			printf("\n");
			break;
			
			case 1:
			printf("One\n");
			break;
			
			case 2:
			printf("Two\n");
			break;
			
			case 3:
			printf("Three\n");
			break;
			
			case 4:
			printf("Four\n");
			break;
			
			case 5:
			printf("Five\n");
			break;
			
			case 6:
			printf("Six\n");
			break;
			
			case 7:
			printf("Seven\n");
			break;
			
			case 8:
			printf("Eight\n");
			break;
			
			case 9:
			printf("Nine\n");
			break;
			}
				}
					}
else{
	printf("Invalid Input\n");
	}
return 0;
}
