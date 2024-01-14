#include <stdio.h>
int main() {
int a,b;
printf("The attendence percentange of the student:");
scanf("%d", &a);
if(a<75) {printf("The grade obtained by the student is 'W'");}
else if((a>=75) && (a<=100)) {	printf("Enter the marks obtained by the student: "); 
	scanf("%d",&b);
	if(b>=90) {printf("The grade obtained by the student is 'S'\n");}
	else if((b>=80) && (b<90)) {printf("The grade obtained by the student is 'A'\n");}
	else if((b>=70) && (b<80)) {printf("The grade obtained by the student is 'B'\n");}
	else if((b>=60) && (b<70)) {printf("The grade obtained by the student is 'C'\n");}
	else if((b>=50) && (b<60)) {printf("The grade obtained by the student is 'D'\n");}
	else if((b>=40) && (b<50)) {printf("The grade obtained by the student is 'E'\n");}
	else if(b<40) {printf("The grade obtained by the student is 'F'\n");}
	}
	return 0;
	}
