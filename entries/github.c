#include<stdio.h>

#include<conio.h>

int main()

{

int A[100],K=0,UB;

printf(“Enter the Array size less than 100: “);

scanf(“%d”,&UB);

printf(“Enter the elements in array: \n”);

for(K=0;K<UB;K++)

{

scanf(“%d”,&A[K]);

}

printf(“The Traverse of array is:\n”);

for(K=0;K<UB;K++)

{

printf(“%d\n”,A[K]);

}

getch();

return 0;

}

 
