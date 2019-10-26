#include<stdio.h>
#include<malloc.h>
int row,col;
void create_first(int *,int,int);
void create_second(int *,int,int);
void addition(int *,int *,int *,int,int);
void subtraction(int *,int *,int *,int,int);
void transpose_first(int *,int *,int,int);
void transpose_second(int *,int *,int,int);
int main()
{
	int ch;
	printf("enter number of rows:\n");
	scanf("%d",&row);
	printf("enter number of coloumns:\n");
	scanf("%d",&col);

	int *a=(int *)malloc(row*col*sizeof(int));
	int *b=(int *)malloc(row*col*sizeof(int));
	int *c=(int *)malloc(row*col*sizeof(int));
	int *d=(int *)malloc(row*col*sizeof(int));
	int *ta=(int *)malloc(row*col*sizeof(int));
	int *tb=(int *)malloc(row*col*sizeof(int));
	printf("enter number of rows:\n");
	scanf("%d",&row);
	printf("enter number of coloumns:\n");
	scanf("%d",&col);
create_first(a,row,col);
create_second(b,row,col);

	while(1)
	{
		printf("enter your choice:\n1.additon\n2.subtrcation\n3.transpose first matrix\n4.transpose 2nd matrix:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				addition(a,b,c,row,col);
				break;
			case 2:
				subtraction(a,b,d,row,col);
				break;
			case 3:
				transpose_first(a,ta,row,col);
				break;
			case 4:
				transpose_second(b,tb,row,col);
				break;
		}
	}
return 0;
}

void create_first(int *a,int row,int col)
{
	int i,j,n;
	printf("enter elements of first matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&n);
			*(a+i*row+j)=n;
		}
	}
}
void create_second(int *b,int row,int col)
{
	int i,j,num;
	printf("enter elements of second matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&num);
			*(b+i*row+j)=num;
		}
	}
}
void addition(int *a,int *b,int *c,int row,int col)
{
	int i,j;
	printf("addition of both matrices:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			*(c+i*row+j)=*(a+i*row+j)+*(b+i*row+j);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("element c[%d][%d]-%d\n",i,j,*(c+i*col+j));
		}
	}
}
void subtraction(int *a,int *b,int *d,int row,int col)
{
	int i,j;
	printf("subtraction:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			*(d+i*col+j)=*(a+i*col+j)-*(b+i*col+j);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("element d[%d][%d]-%d\n",i,j,*(d+i*col+j));
		}
	}
}
void transpose_first(int *a,int *ta,int row,int col)
{
	int i,j;
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			*(ta+i*row+j)=*(a+j*row+i);
		}
	}
	printf("Transpose of first matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("element ta[%d][%d]-%d\n",i,j,*(ta+i*col+j));
		}
	}
}
void transpose_second(int *b,int *tb,int row,int col)
{
	int i,j;
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			*(tb+i*row+j)=*(b+j*col+i);
		}
	}
	printf("Transpose of second matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("element tb[%d][%d]-%d\n",i,j,*(tb+i*col+j));
		}
	}
}
