#include <stdio.h>

int main(){
	
	int arr[6] = {1,2,4,5,6,7};
	int input;
	int pos;
	
	printf("Enter element to insert: ");
	scanf("%d", &input);
	
	printf("Enter location to insert: ");
	scanf("%d", &pos);
	int i; 
	for (i=5;i>=pos;i--){//shifting the element from the position to right +1
		arr[i+1] = arr[i];
	}
	arr[pos] = input;
	
	for (i=0; i<6; i++){
		printf("%d", arr[i]);
	}
	
//output 123456
	
	
	
	
	
}
