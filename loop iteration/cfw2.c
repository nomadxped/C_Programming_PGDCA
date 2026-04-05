/*
C program to print natural numbers in reverse from n to 1
*/

#include <stdio.h>

main(){
	int n;
	printf("Input N: ");
	scanf("%d", &n);
	int i = n;
	//using for loop
	for (i;i>0;i--){
		printf("%d\n" ,i);
	}
}
