/*
Find the maximum of two numbers
Author: Anu 
Date:1/23/2026
*/
#include <stdio.h>

main(){
	int num1 , num2;
	
	printf("Enter num1: ");
	scanf("%d", &num1);
	
	printf("\nEnter num2: ");
	scanf("%d", &num2);
	
	if (num1==num2){
		printf("Both numbers are equal");
	}
	else if(num1>num2){
		printf("num1 is greater than num2");
	}
	else{
		printf("num2 is greater");
	}
}
