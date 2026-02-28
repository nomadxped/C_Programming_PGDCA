//print all the prime number between 1 to n

#include <stdio.h>

int main(){
    int n,i, j , isPrime;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n;i++){
        isPrime=1; // first consider the number as if that number is prime

        for(j=2;j<i;j++){
            if(i%j==0){
                isPrime=0; 
                break;
            }
        }
        if (isPrime==1){
            printf("%3d",i);
        }
            
        }

    }

