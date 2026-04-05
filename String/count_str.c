#include <stdio.h>
#include <string.h>

int main(){
	char statement[50];
	int vowel=0, consonants=0, digits=0, spaces=0;
	
	printf("enter your statement: ");
	gets(statement);
	
	printf("Total characters : %d\n", strlen(statement));
	int length = strlen(statement);
	int i;
	for (i=0;i<length;i++){
		if (statement[i]>='0'&&statement[i]<='9'){
			digits+=1;
		}
		if(statement[i]==32){
			spaces+=1;
		}
		if(statement[i]=='a'||statement[i]=='e'||statement[i]=='i'||statement[i]=='o'||statement[i]=='u'||statement[i]=='A'||statement[i]=='E'||statement[i]=='I'||statement[i]=='O'||statement[i]=='U'){
			vowel+=1;
		}//First check if that's vowel if not it's definitely alphabet other than vowel
		else if(statement[i]>='a'&& statement[i]<='z'|| 
            statement[i]>='A'&& statement[i]<='Z'){
        consonants++;
    }
	}
	 printf("Vowel count: %d\n", vowel);
	 printf("Consonant count: %d\n", consonants);
	 printf("Digit count: %d\n", digits);
	 printf("spaces count: %d\n", spaces);
}
