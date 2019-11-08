#include <stdio.h>
#include <stdlib.h>
void swap(int *,int *);
int main()
{
    int a,b;

    printf("Enter any two numbers \n a =");
    scanf("%d",&a);
    printf("b =");
    scanf("%d",&b);

    swap(&a,&b);
    printf("The number a = %d and b = %d",a,b);

    return 0;
}
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;

}
