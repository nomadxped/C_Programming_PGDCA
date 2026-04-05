/*C program to check whether a character is vowel or consonant
Author:Anu
Date: 24/01/2026
*/

#include <stdio.h>

main(){
	char ch;
	
	printf("Input a character: ");
	scanf("%c",&ch);
	
	if (  ( (ch >= 'a') && (ch <= 'z')  )   ||    (  (ch >= 'A') && (ch <= 'Z')  )  ){
	
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||  ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' ){
		printf("%c is vowel", ch);
}
	else{
		printf("%c is consonant");
}
}
else{
	printf("character is not alphabet");
}

}
