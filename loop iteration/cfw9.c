#include <stdio.h>



main(){
	int n;
	int i; 
	
	printf("Enter the num: ");
	scanf("%d", &n);
	for (i=0;i<n+1;i++){
		printf("%d * %d = %d\n", n, i, n*i);
	}
	

	
	
}

//output will be 5050 if we put 100 as upper limit
