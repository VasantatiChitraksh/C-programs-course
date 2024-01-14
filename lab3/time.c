#include <stdio.h>
int main() {
	printf("TIME CONVERSION\n\n");
 	int h, m, s, t;
	printf("No of hours:");
	scanf("%d", &h);
	printf("No of minutes:");
	scanf("%d", &m);
	printf("No of seconds:");
	scanf("%d", &s);
	t=3600*h+60*m+s;
	printf("Time in seconds is %d\n", t);
	return 0;
		}
