#include <stdio.h>
#include <string.h>

//my version

//check if the reverse of the string is same 
int main(){
	char name[20] = "madam";
	int isPat = 1;
	int i;
	
	int len = strlen(name);
	int a = strlen(name)-1;
	for (i=0;i<len/2;i++){
		
		if (name[i]!=name[a]){
			isPat =0;
			break; 
		}
		a--;
	}
	if (isPat){
		printf("isPat");
	}
	else{
		printf("notPat");
	}
}
