#include<stdio.h>

int factorial(int);

int main()
{
	
	int fact,n;
	printf("Enter Number:\t");
	scanf("%d",&n);
	fact=factorial(n);
	printf("Factorial of %d is %d",n,fact);	
	
}

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	
	else
	{
		return(n*factorial(n-1));
	}
}
