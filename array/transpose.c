//matrix tranpose

#include <stdio.h>

int main(){
	int size;
	printf("Enter the square matrix size: ");
	scanf("%d", &size);
	
	
	int arr1[size][size];
	 //saving the transpose here
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("Enter the element for %d%d: ", i,j);
			scanf("%d", &arr1[i][j]);
		}
	}
	
	printf("\nThis is transposed matrix: \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%4d", arr1[j][i]);
		}
		printf("\n");
	}
	
	
}
