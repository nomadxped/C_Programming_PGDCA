/*Reads 10 integers from the user.

Then calculates and prints:

The count of even numbers

The sum of even numbers

The count of odd numbers

The sum of odd numbers
*/

#include <stdio.h>
#define MAX_SIZE 100
int main(){
    int i, size ,arr[MAX_SIZE];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (i=0;i<size;i++){
        printf("Enter %d number in the array: ",i);
        scanf("%d", &arr[i]);
    }
    //counting
    int even_count=0;
    int even_sum = 0;
    int odd_count = 0;
    int odd_sum = 0 ; 
    for(i=0;i<size;i++){
        if(arr[i]%2==0){
            even_count++;
            even_sum+=arr[i];
    }
    else{
        odd_count++;
        odd_sum+=arr[i];

    }
    }
    printf("Even numbers count: %d\n", even_count);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Odd numbers count: %d\n", odd_count);
    printf("Sum of odd numbers: %d", odd_sum);

}

