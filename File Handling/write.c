#include <stdio.h>

int main(){
	FILE *fp;
	char ch[100] = "This is File Handling write mode";
	
	
	
	fp = fopen("hello.txt", "w"); //open file in write mode
	
	if (fp == NULL){
		printf("Cannot open file");
	}
	else{
		fputs(ch, fp);
		
		fclose(fp);
		printf("Data successfully written into 'hello.txt'");
	}
	
	
}
