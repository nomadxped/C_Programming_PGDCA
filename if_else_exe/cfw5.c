/*C program check whether a number is 
even or odd
Author: Anu
Date: 1/23/2026
*/


main(){
	int num;
	
	printf("Enter a number: ");
	
	scanf("%d", &num);
	
	if (num%2==0){
		printf("%d is an even number", num);
	}
	else {
		printf("%d is an odd number ", num);
	}
}
