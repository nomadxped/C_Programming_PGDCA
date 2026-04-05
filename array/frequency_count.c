#include <stdio.h>

int main(){
	int arr[10]= {5, 10, 2, 5, 50, 5, 10, 1, 2, 2};
	int visited[10];
	
		int i,j;  
	for (i =0; i<10;i++){
		
		if (visited[i]==1)
			continue;
		
		int count = 0;
		for(j=0;j<10;j++){
			if(arr[j]==arr[i]){
				count+=1;
				visited[j] = 1 ; 
			}
		}
		
		printf("Frequency of %d = %d\n", arr[i], count);
		count=0;
	}
}
