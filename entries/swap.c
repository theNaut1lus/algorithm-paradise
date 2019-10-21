#include<stdio.h>
int main()
{
    int a1,a2,t;
    printf("\nEnter first number:");
    scanf("%d",&a1);
    printf("\nEnter second number:");
    scanf("%d",&a2);

    t=a1;
    a1=a2;
    a2=t;
    printf("After swapping, numbers are:%d %d",a1,a2);
    return 0;

}
