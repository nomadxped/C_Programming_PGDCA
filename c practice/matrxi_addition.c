// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // int arr1[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };
    
    // int arr2[3][3]= {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };
    
    int arr1[3][3] , arr2[3][3];
    int i,j;
    printf("Array1\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Enter element in the matrxi position %d%d: ", i+1,j+1);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("\nArray1\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Enter element in the matrxi position %d%d: ", i+1,j+1);
            scanf("%d", &arr2[i][j]);
        }
    }
    
    int arr3[3][3];
    
    for (i= 0 ; i<3;i++){
        for (j=0;j<3;j++){
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    printf("Addtion of arr1+arr2 = \n");
    for (i = 0 ; i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d", arr3[i][j]);
        }
        printf("\n");
    }
}
