/*C program to check Leap Year
Author: Anu
Date:1/23/2026
*/

#include <stdio.h>
/*If year is exactly divisible by 4 and not 
divisible by 100, then it is leap year. Or if year is 
exactly divisible by 400 then it is leap year.*/
main(){
	int year;
	
	
	printf("Enter the year: ");
	
	scanf("%d", &year);
	
	if (year%400==0){
		printf("%d is a leap year\n", year);
	}
	else if(year%4==0 && year%100!=0){  //divisible by 4 but not divisible by 100
		printf("%d is a leap year\n", year);
	}
	else{
		printf("%d is not a leap year\n", year);
	}
}
