#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000

int main(){
	char str[MAX_SIZE];
	printf("Enter your string: ");
	gets(str);
	int i,j;
	for(i=strlen(str)-1;i>=0;i--){
		printf("%c", str[i]);
	}
	
}
