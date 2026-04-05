#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int size, arr[MAX_SIZE];

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int i;
    for (i=0;i<size;i++){
        printf("Enter the element :");
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for (i=0;i<size;i++) {
        if(arr[i]<min) {
            min = arr[i];
        }
            if (arr[i]>max){
                max= arr[i];
            }



        }
    printf("min: %d , max: %d" , min, max);
    }

