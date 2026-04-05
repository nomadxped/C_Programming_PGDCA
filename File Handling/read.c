#include <stdio.h>
#include <stdlib.h>


//read a file
int main(){
	FILE* fptr;
	char ch;
	
	fptr = fopen("name.txt", "r");
	
	
	while((ch = fgetc(fptr))!=EOF){
		printf("%c", ch);
	}
	
	fclose(fptr);
	
}
