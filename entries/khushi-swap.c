#include<stdio.h>
swap(int *p1,int *p2)
{
	int c;
	c=*p1;
	*p1=*p2;
	*p2=c;
}
main()
{
	int a,b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	swap(&a,&b);
	printf("After swapping\n");
	printf("a=%d\nb=%d",a,b);
}
