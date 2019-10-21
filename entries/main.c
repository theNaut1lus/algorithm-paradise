#include<stdio.h>
#include<conio.h>
 main()
{
int a,b,c;
printf("enter the two numbers");
scanf("%d %d", &a, &b);
c=a;
a=b;
b=c;
printf("the swapped numbers are %d %d", a,b);

    
}