// diagonal sum
#include <stdio.h>

int main() {
	
	//for testing
     int arr1[3][3] = {
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}
     };
     
     int sum=0;
    

    
    int arr3[3][3];
    int i,j;
    for (i= 0 ; i<3;i++){
        for (j=0;j<3;j++){
            if(i==j){
            	sum+=arr1[i][j];
			}
        }
    }

    printf("%d", sum);
}
