#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter any two numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("numbers after swaping are a=%d b=%d",a,b);
}
swap(int *p,int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;

}
