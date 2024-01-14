#include <stdio.h>

int main ( void )
 {
 int n ;
 scanf ( "%d" , &n) ;
 int arr[n];
 for(int i=0;i<n;i++) {
 scanf("%d", &arr[i]);
 }
 // w r i t e c o d e t o i n i t i a l i z e t h e a r r a y w i t h r a n d o m v a l u e s
 int j = 0;
 for ( int i = 0; i < n - 1; i ++) { // c o p y o n l y i f t h e c u r r e n t e l e m e n t i s n o t e q u a l t o t h e n e x t
 if ( arr [ i ] != arr [ i + 1]) {
 arr [ j ++] = arr [ i ];
 }
 }
 arr [ j ++] = arr [ n - 1];
 for(int i=0;i<j;i++) {
 printf("%d ",arr[i]);
 }
 return 0;
 }
