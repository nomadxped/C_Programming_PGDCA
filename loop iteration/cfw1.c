/*
C program to print all natural numbers from 1 to n

*/

#include <stdio.h>

main(){
	int n;
	printf("Input upper limit: ");
	scanf("%d", &n);
	int i=1;
	//using for loop
	for (i;i<=n;i++){
		printf("%d\n" ,i);
	}
}




