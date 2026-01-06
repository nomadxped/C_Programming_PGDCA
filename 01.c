/*
#Documentation#
First Program in C
Author: Anvaya Acharya
Date: 01/06/2026
*/
#include <stdio.h>  // Link standard input/output library

//Main Program
main(){
	printf("Anu\n"); //printf("your name");

// Variable declaration
int i;
float f;
char c;
double d;

printf("Enter any character: "); 
scanf("%c", &c); //scanning for the input from user and place the input to the memory location of c

printf("Enter any number: ");
scanf("%d", &i);

printf("Enter any number (float): ");
scanf("%f", &f);

printf("Enter any number (double): ");
scanf("%lf", &d);


// Display input values
printf("\n\nyou have entered charcater: %c\n", c); 
printf("you have entered number: %d\n", i);
printf("you have entered number (float): %f\n", f);
printf("you have entered charcater (double): %lf", d);

}


