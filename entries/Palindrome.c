#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,k,a,t;

    printf("Enter any 5 digit number : \n");
    scanf("%d",&num);
    printf("\n");

    k=num;

    for(t=0;k!=0;)
    {
        t=t*10;            //***Point to ponder***
        a=k%10;
        t=t+a;
        k=k/10;
    }

    printf("The reverse of %d is %d\n\n",num,t);

    if(num==t)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");

    return 0;
}
