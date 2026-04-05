//delete an item in array

#include <stdio.h>

int main(){
	int arr[5] = {1,2,3,13,4};
	int pos;
	
	printf("Enter the position of element to dlt: ");
	scanf("%d", &pos);
	
	int i;
	for(i = pos;i<5;i++){
		arr[i] = arr[i+1];
	}
	
	for(i=0;i<5-1;i++){ //size- 1 position as we shifted the array right deleting the element
		printf("%d\n", arr[i]);
	}
	
	
	
	
	
	
}
