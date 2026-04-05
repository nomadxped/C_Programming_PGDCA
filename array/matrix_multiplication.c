//matrix multiplication
#include <stdio.h>

int main(){


int arr3[3][3]={0};
 int arr1[3][3] = {
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}
     };
     
 int arr2[3][3] = {
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}
     };

	
    int i,j,k;
    
    for (i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		for(k=0;k<3;k++){
    			arr3[i][j]+= (arr1[i][k]*arr2[k][j]);
			}
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%4d", arr3[i][j]);
		}
		printf("\n");
	}
}

