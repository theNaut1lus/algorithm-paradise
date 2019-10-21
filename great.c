#include <stdio.h>
main()
{
    int a,b,c,d,s;
    printf("enter all the four numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    s=a>b?a:b>c?b:c>d?c:d;
    printf("the greatest of all number is %d",s);

}
