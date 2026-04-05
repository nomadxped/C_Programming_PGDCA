// scalar matrix multiplication
#include <stdio.h>

int main() {
	
	//for testing
     int arr1[3][3] = {
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}
     };
     
     int scalar = 2;
    

    
    int arr3[3][3];
    int i,j;
    for (i= 0 ; i<3;i++){
        for (j=0;j<3;j++){
            arr3[i][j] = arr1[i][j]*2;
        }
    }

    for (i = 0 ; i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d", arr3[i][j]);
        }
        printf("\n");
    }
}
