#include <stdio.h>
swap (int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

int main()
{
	int a,b;
	printf("Enter two numbers :\n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("The numbers on swapping are :\n");
	printf("%d      %d",a,b);
	return 0;
}
