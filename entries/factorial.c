#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int f;
    printf("Enter the number : \n");
    scanf("%d",&f);

    fact(f);
    printf("The factorial of %d is %d",f,fact(f));

    return 0;
}
int fact(int a)
{
    int i,flag=1;
    for(i=1;i<=a;i++)
    {
        flag=flag*i;
    }
    return(flag);
}
