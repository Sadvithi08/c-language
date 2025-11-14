#include<stdio.h>
void main()
{
	int n,t,rev=0,r;
	printf("enter a number :");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(t==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}