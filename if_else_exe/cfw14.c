/*C program to check whether triangle is valid or not if sides are given
Author:Anu
Date:2/4/2026
*/

#include <stdio.h>

main(){
	int a,b,c;
	printf("Input first side: ");
	scanf("%d", &a);
	printf("Input second side: ");
	scanf("%d", &b);
	printf("Input third side: ");
	scanf("%d", &c);
	
	if (a+b>c && a+c>b && b+c>a){
		printf("The triangle is valid");
	}
	else{
		printf("The triangle is not valid");
	}
	
}
