#include <stdio.h>
int main() {
int count=0,count2=0;
for(int i=0;i<10;i++) {
count++ ;
}
for(int i=0;i<10;++i) {
count2++ ;
}
printf("The counts are %d and %d ", count ,count2);
return 0;
}
