/*C program to check whether a number
 is positive, negative or zero
 Author:Anu
 Date: 1/23/2026*/
 
 #include <stdio.h>
 
 main(){
 	int num;
 	
 	printf("Enter a number: ");
 	scanf("%f", &num); 
 	
 	if (num==0){
 		printf("This number is exactly 0");
	 }
	
	else if (num<0){
		printf("The number is negative");
	}
	else{
		printf("The number is positive");
	}
 }
