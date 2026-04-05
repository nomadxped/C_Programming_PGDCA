#include <stdio.h>
#define MAX_SIZE 100

int main(){
    int size, arr[MAX_SIZE], sum=0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int i;
    for (i=0;i<size;i++){
        printf("Enter the element :");
        scanf("%d", &arr[i]);
    }

    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("%d", sum);
}
