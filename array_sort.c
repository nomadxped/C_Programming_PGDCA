//for sorting smaller to bigger

#include <stdio.h>
#define MAX_SIZE 100
int main(){
    int i, size ,j, arr[MAX_SIZE];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (i=0;i<size;i++){
        printf("Enter %d number in the array: ",i);
        scanf("%d", &arr[i]);
    }

    for (i=0;i<size;i++){
        for (j=0; j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }

    for (i=0;i<size;i++){
        printf("%4d", arr[i]);
    }

}

//bigger to sorter
/*
#include <stdio.h>
#define MAX_SIZE 100
int main(){
    int i, size ,j, arr[MAX_SIZE];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (i=0;i<size;i++){
        printf("Enter %d number in the array: ",i);
        scanf("%d", &arr[i]);
    }

    for (i=0;i<size;i++){
        for (j=0; j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }

    for (i=0;i<size;i++){
        printf("%4d", arr[i]);
    }

}