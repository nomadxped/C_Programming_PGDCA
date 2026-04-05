/*
Find the maximum of three numbers
Author: Anu 
Date:1/23/2026
*/

#include <stdio.h>

main(){
	int num1, num2, num3;
	
	printf("Enter num1: ");
	scanf("%d", &num1);
	
	printf("\nEnter num2: ");
	scanf("%d", &num2);
	
	printf("\nEnter num3: ");
	scanf("%d", &num3);
	
	if(num1>num2){
		if (num1>num3){
			printf("num1 is the greatest number");
		}
		else{
			printf("num3 is the greatest number");
		}
	}
	else if(num2>num3){
		printf("num2 is the greatest");
	}
	else{
		printf("num3 is the greatest number");
	}
}

/*problem with this code if num1/num2/num3 all equal it will declare
 num3 the greatest number
