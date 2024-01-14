#include <stdio.h>
void intializeMarix(int rows, int cols, int arr[rows][cols]){
			printf("Enter the values:\n");
for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
			scanf("%d", &arr[i][j]);
						}
							}
					}
void printMatrix(int rows, int cols, int arr[rows][cols]){
for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
			printf("%d ", arr[i][j]);
						}
				printf("\n");
							}
						}
int main(){
int rows,cols;
printf("Enter the no of rows and columns:");
scanf("%d",&rows);
scanf("%d",&cols);
int arr[rows][cols];
intializeMarix(rows,cols,arr);
printf("Matrix in Orginal Form\n");
printMatrix(rows,cols,arr);
int b[cols][rows];
for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
		b[j][i]=arr[i][j];
					}	
						}
printf("Matrix in Transpose form\n");
printMatrix(cols,rows,b);
return 0;
}
		
		
