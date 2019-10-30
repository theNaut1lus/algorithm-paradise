#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int insert(int *mat,int m,int n)
{
	int i,j,no;
	for( i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter Element [%d][%d]: ",i,j);
			scanf("%d",&no);
			*(mat + i*n + j)=no;
		}
	}
}
int view(int *mat, int m, int n)
{	int i,j;
	for( i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		printf("%d ",*(mat + i*n + j));
		}
		printf("\n");
	}
}
int addition(int *mat1, int* mat2, int* add, int m, int n)
{
	int i,j;
	for( i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		*(add + i*n + j)= *(mat1 + i*n +j) + *(mat2 + i*n +j);
		}
	}
}
int subtraction(int *mat1, int* mat2, int* sub,int m,int n)
{
	int i,j;
	for( i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		*(sub + i*n + j)= *(mat1 + i*n +j) - *(mat2 + i*n +j);
		}
	}
}
int transpose(int *mat, int *trans1, int m,int n)
{
	int i,j;
	for( i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		*(trans1 + j*m + i)= *(mat + i*n +j);
		}
	}
}

int main()
{
	int i,j,m,n,p,q,no,choice;
	printf("Enter Order of First matrix:\n");
	scanf("%d %d",&m,&n);
	int *mat1 = (int *)malloc(m*n*sizeof(int));
	printf("Enter Order of Second matrix:\n");
	scanf("%d %d",&p,&q);
	int *mat2 = (int *)malloc(p*q*sizeof(int));
	printf("Enter First Matrix of order %d x %d:\n",m,n);
	insert(mat1,m,n);
	printf("\nFirst Matrix is: \n");
	view(mat1,m,n);
	printf("Enter Second Matrix of order %d x %d:\n",p,q);
	insert(mat2,p,q);
	printf("\nSecond Matrix is: \n");
	view(mat2,p,q);
	getch();
	while(1)
	{	
		system("cls");
		printf("\n1. Addition of the matrices\n2. Subtraction of the matrices\n3. Transpose of the Matrix\n4. Exit\n");
		printf("Enter the option you want to proceed with: \n");
		scanf("%d",&choice);
		switch(choice){
			case 1: if ( m==p && n==q )
					{
						int *add = (int *)malloc(m*n*sizeof(int));
						addition(mat1, mat2, add, m, n);
						printf("\nAddition of Matrices is:\n");
						view(add,m,n);
						printf("Press Enter to Continue");
						getch();
					}
					else{
						printf("Addition of Matrices is not possible as order of the two matrices is not equal");
						getch();
					}
					break;
			case 2:	if ( m==p && n==q )
					{
						int *sub = (int *)malloc(m*n*sizeof(int));
						subtraction(mat1, mat2, sub, m, n);
						printf("\nAddition of Matrices is:\n");
						view(sub,m,n);
						printf("Press Enter to Continue");
						getch();
					}
					else{
						printf("Subtraction of Matrices is not possible as order of the two matrices is not equal");
						getch();
					}
					break;
			case 3:	printf("\nTranspose of first Matrix is\n");
					int *trans1= (int *)malloc(m*n*sizeof(int));
					int *trans2= (int *)malloc(p*q*sizeof(int));
					transpose(mat1,trans1,m,n);
					view(trans1,n,m);
					printf("\nTranspose of second Matrix is:\n");
					transpose(mat2,trans2,p,q);
					view(trans2,q,p);
					
					printf("Press Enter to continue\n");
					getch();
					break;
			case 4:	exit(0);
					break;
		}
	}
		
}
