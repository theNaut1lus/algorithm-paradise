#include<stdio.h>

int main()
{
    float a, b, c;
    printf("Enter angles of the triangle in degrees ");
    scanf("%f%f%f",&a,&b,&c);

    if (a+b+c==180)
        printf("\nIt is a valid triangle\n");
    else
        printf("\nIt is not a valid triangle\n");
    return 0;
}
