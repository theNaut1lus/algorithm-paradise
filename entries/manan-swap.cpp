#include <stdio.h>

int swap (int *a1, int  *b1)
{
	int c;
	c=*a1;
	*a1=* b1;
	*b1= c;
}

int main()
{
	int a,b;
	printf("enter a and b \n");
	scanf("%d%d",&a,&b);
	
	swap(&a,&b);
	printf("a = %d \nb = %d",a,b);
	return 0;
	
}
