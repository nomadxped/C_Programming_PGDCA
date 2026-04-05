/* 
C program to check whether an alphabet is uppercase or lowercase
Author:Anu
Date:2/4/2026
*/

#include <stdio.h>

main(){
	char ch;
	
	printf("Input any character: ");
	scanf("%c", &ch);
	
	if (ch>='A' && ch<='Z'){
		printf("character is uppercase");
	}
	else if (ch>='a' && ch<='z'){
		printf("character us lowercase");
	}
	else{
		printf("Invalid character");
	}
}
