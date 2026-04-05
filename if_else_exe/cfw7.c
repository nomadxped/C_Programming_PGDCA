/*C program to check whether a character is alphabet 
or not
Author:Anu
Date: 24/01/2026
*/

#include <stdio.h>

main(){
	char ch;
	
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if (  ( (ch >= 'a') && (ch <= 'z')  )   ||    (  (ch >= 'A') && (ch <= 'Z')  )  ){
		printf("The character is alphabet");
}
else{
	printf("The character is not alphabet");
}
}
