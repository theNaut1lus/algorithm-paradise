#include<stdio.h>
int main()
{
	int a,b,t;
	printf("enter the first number:\n");
	scanf("%d",&a);
	printf("enter the second number:\n");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("after swapping : %d %d\n",a,b);
return 0;
}
