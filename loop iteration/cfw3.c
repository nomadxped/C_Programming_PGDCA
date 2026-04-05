/*
Write a C program to print all alphabets from a to z. – using while loop
*/

#include <stdio.h>

main(){
	char ch = 'a';
	while (ch!='z'+1){
		printf("%c", ch);
		++ch;
	}
}
