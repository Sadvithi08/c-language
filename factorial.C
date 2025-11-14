#include<stdio.h>
int main(void)
{
	int n=1,num,fact=1;
	printf("enter the number:");
	scanf("%d",&num);
    for(n=1;n<=num;n++);                                           
	fact=fact*n;
	printf("factorial of %d is %d",num,fact);
}
