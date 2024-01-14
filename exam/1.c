# include <stdio.h>
 int main ( void )
 {
 int count = 0;
 int i = 0;
 for (; ; i ++) {
 if ( i >= 10) {
 break ;
 }
 count ++;
 }
 printf ("i = %d count = %d \ n " 
 i ,count) ;
 return 0;
}
