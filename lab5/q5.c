 #include <stdio.h>
 int sumofdigit(int num) {int digitsum=0;
 			while(num>0){ 
 			digitsum += num % 10;
 			num /= 10;}
 			   		  
 			  return digitsum;
 			  }
 int main() {int n;
 printf("Enter a positive number:");
 scanf("%d", &n);
 if(n<=0) { printf("Invalid Input");}
 while(n>=10) { n= sumofdigit(n);}
 printf("The single digit output is %d\n" , n);
 return 0;
 }
