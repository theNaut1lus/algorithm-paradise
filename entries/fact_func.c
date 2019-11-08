#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{   int n;
    printf("enter the number");
    scanf("%d",&n);
    fact(n);
    printf("factorial of given number is %d",fact(n));
}
int fact(int a)
{
    int i,t;
    t=1;
    for(i=1;i<=a;i++)
    {
        t=t*i;
    }
    a=t;
    return(a);
}
