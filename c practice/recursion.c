#include <stdio.h>
//find power of any number
int main(){
	
	double base, power;
	
	int expo;
	printf("Enter base:");
	scanf("%lf", &base);
	
	printf("Enter exponent: ");
	scanf("%lf", &expo);
	
	power = power(base, expo);
	
	printf("%.2lf", power);
}

int power(int base, int p){
	
	if (p==0){
		return 1;
	}
	else if(p>0){
		return base *power(base, p-1);
	}
	else{
		return 1/power(base , -p);
	}
	
}
