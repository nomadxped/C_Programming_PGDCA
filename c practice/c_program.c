#include <stdio.h>

int main(){
	int i, num;
	
	while(1){
		printf("Enter a number: ");
		scanf("%d", &num);
		if(num%2==1){
			printf("Enter only even number: \n");
			continue;
		}
		printf("%d\n", num);
	}
}
