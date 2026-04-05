#include <stdio.h>



main(){
	int n;
	int sum= 0;
	printf("Enter upper limit: ");
	scanf("%d", &n);
	int i=0;
	while(i<n+1){
		if(i%2!=0){
		
		sum+=i;
	}
		i++;
	}
	printf("%d", sum);
	
	
}

//output will be 5050 if we put 100 as upper limit
