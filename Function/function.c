#include <stdio.h>

int add(int a, int b); //Function declaration

int main(){
	int result;
	
	result = add(5,8);
	printf("%d", result);
	return 0;
	
}

//function definition
int add(int a, int b){
	int sum = a+b;
	return sum; 
}
