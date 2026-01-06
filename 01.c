#include <stdio.h>


main(){
	printf("Anu\n");

int i;
float f;
char c;
double d;

printf("Enter any character: ");
scanf("%c", &c);

printf("Enter any number: ");
scanf("%d", &i);

printf("Enter any number (float): ");
scanf("%f", &f);

printf("Enter any number (double): ");
scanf("%lf", &d);

printf("\n\nyou have entered charcater: %c\n", c);
printf("you have entered number: %d\n", i);
printf("you have entered number (float): %f\n", f);
printf("you have entered charcater (double): %lf", d);

}

