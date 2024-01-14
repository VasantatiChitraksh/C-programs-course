# include <stdio.h>
 int main ( void )    {
 int count = 0,check=0;
 for ( int i = 0; i < 10; i ++) {
 check++ ;
 if (( i % 2) == 0) {
 continue ;
 }
 count ++;
 }
 printf ( " count = %d \ ncheck=%d", count,check ) ;
 return 0;
 }
