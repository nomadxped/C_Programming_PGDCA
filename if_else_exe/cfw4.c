/*C program to check whether a number 
is divisible by 5 and 11 or not
Author: Anu
Date: 1/23/2026*/

main(){
	int num;
	
	printf("Enter the number");
	scanf("%d", &num);
	
	if(num%5==0 && num%11==0){
		printf("Number is divisible by 5 and 11");
	}
	else{
		printf("Number is not divisible by 5 and 11");
	}
}
