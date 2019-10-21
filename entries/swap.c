#include<stdio.h>
void main(){
int a,b,c;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);

c=b;
b=a;
a=c;

printf("a=%d b=%d",a,b);


}
