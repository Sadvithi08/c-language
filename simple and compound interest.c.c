#include<stdio.h>
#include<stdio.h> //for pow( function used in compound interest

int main() {
	float principal,rate,time;
	float simpleinterest,compoundinterest;
	
	//input
	printf("enter principal amount:");
	scanf("%f",&principal);
	printf("enter annual interest rate(in %%):");
	scanf("%f",&rate);
	printf("enter time(in years):");
	scanf("%f",&time);
	
	//calculate simple interest
	simpleinterest=(principal*rate*time)/100;
	
	//calculate compound interest
	compoundinterest=principal*pow((1+rate/100),time)-principal;
	
	//output
	printf("\nsimple interest=%.2f\n",simpleinterest);
	printf("compound interest=%.2f\n",compoundinterest);
	
	return 0;
}