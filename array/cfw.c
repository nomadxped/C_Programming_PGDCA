//Taking input in the array

#include <stdio.h>
#define SIZE 5
//int main(){
//	int a[SIZE];
//	int i;
//	
//	for (i=0;i<=SIZE;i++){
//		printf("Enter the %d element: ", i);
//		scanf("%d", &a[i]);
//	};
//	for (i=0; i<=SIZE; i++){
//		printf("%5d", a[i]);
//	}
//	
//}


/* 
Sum of array
*/

int main(){
	int a[SIZE];
	int i;
	int sum = 0;
	
	for (i=0;i<SIZE;i++){
		printf("Enter the %d element: ", i);
		scanf("%d", &a[i]);
	};
	
	for (i=0; i<SIZE; i++){
		sum+=a[i];
	}
	printf("Sum = %d",sum);
}



