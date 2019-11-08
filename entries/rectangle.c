#include<stdio.h>

int main()
{
    float r, l, b, a1, a2, p, c;
    printf("Enter length and breadth of rectangle ");
    scanf("%f%f",&l,&b);
    printf("Enter radius of circle ");
    scanf("%f",&r);
    a1=l*b;
    a2=(22.0/7)*r*r;
    p=2*(l+b);
    c=2*(22.0/7)*r;
    printf("\nPerimeter of rectangle is %f\n",p);
    printf("circumference of circle is %f\n",c);
    printf("Area of rectangle and circle is %f %f\n",a1,a2);
    return 0;
}
