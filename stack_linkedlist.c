#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
typedef struct node{
	int data;
	struct node *ptr;
} NODE;
NODE *node, *node1,*top=NULL,*top_temp,*top1,*temp, *temp1;
int count=0;
int push(int no){
		if(count==MAXSIZE){
			printf("Stack is overflow\n");
		}
		else if(top==NULL){
			node=(NODE *)malloc(sizeof(NODE));
			node->data=no;
			node->ptr=NULL;
			top=node;
			count++;
			return 1;
		}
		else{
			temp=(NODE *)malloc(sizeof(NODE));
			temp->ptr=top;
			temp->data=no;
			top=temp;
			return 1;
			count++;
		}
}
int push1(int no){
		if(top1==NULL){
			node1=(NODE *)malloc(sizeof(NODE));
			node1->data=no;
			node1->ptr=NULL;
			top1=node1;
		}
		else{
			temp1=(NODE *)malloc(sizeof(NODE));
			temp1->ptr=top1;
			temp1->data=no;
			top1=temp1;
			
		}
}
int pop()
{	int no;
	if(top==NULL)
	{
		printf("Stack Underflow\n");
	}
	else{
		temp=(NODE *)malloc(sizeof(NODE));
		temp=top;
		no=top->data;
		top=top->ptr;
		free(temp);
		if(count==1){
			top==NULL;
		}
		count--;
		return no;	
	}
}
int pop1()
{	int no;
		temp1=(NODE *)malloc(sizeof(NODE));
		temp1=top1;
		no=top1->data;
		top1=top1->ptr;
		free(temp1);
		return no;	
}

void peep(int no1)
{	top_temp=top;
	int no,i,count1=0,count2=0,cur=count,found;
	if(top==NULL)
	{
		printf("Stack is underflow");
	}
	else if(no1>MAXSIZE)
			{
			printf("Position is more than max size of stack");	
			}
	else{
		
		while(top_temp)
		{	count2++;
			if(count2==no1)
			{	printf("The element at %d position is %d\n", no1, top_temp->data);
				found=1;
			}
			else if(found != 1)
			{
				push1(pop());
				count1++;
			}
			top_temp=top_temp->ptr;
		}
		for (i=count1;i>0;i--)
		{
			push(pop1());
		}
	}
		
}
void search(int no1)
{	top_temp=top;
	int no,i,count1=0,count2=0,found=0;
	if(top==NULL)
	{
		printf("Stack is underflow");
	}
	else{
		
		while(top_temp)
		{	count2++;
			if(top_temp->data==no1)
			{	printf("The element %d found at %d\n",top_temp->data,count2);
				found=1;
			}
			else if(found != 1)
			{
				push1(pop());
				count1++;
			}
			top_temp=top_temp->ptr;
		}
		for (i=count1;i>0;i--)
		{
			push(pop1());
		}
	}
		
}
void display()
{	top_temp=top;
	int i,count1=0,count2=0;
	if(top_temp==NULL)
	{
		printf("Stack is underflow");
	}
	else{
		
		while(top_temp)
		{	count2++;
				printf("%d \n",top_temp->data);
				top_temp=top_temp->ptr;
				push1(pop());
				count1++;
			
			
		}
		for (i=count1;i>0;i--)
		{
			push(pop1());
		}
	}
		
}

int main(){
	int choice,no,no1;
	while(1)
	{
	printf("1.Push Operation\n2.Pop Operation\n3.Peep Operation\n4.Search a number\n5.Display the stack\n6.Exit\n");
	scanf("%d",&choice);
	switch(choice){
		case 1: printf("Enter number to push: ");
				scanf("%d",&no);
				if(push(no))
				{
					printf("Element %d pushed\n",no);
				}
				getch();
				system("cls");
				break;
		case 2: printf("\nElement %d popped\n",pop());
				getch();
				system("cls");
				break;
		case 3: printf("Enter the position which you want to peep\n");
				scanf("%d",&no1);
				peep(no1);
				printf("\n");
				getch();
				system("cls");
				break;
		case 4: printf("Enter the number which you want to search\n");
				scanf("%d",&no1);
				search(no1);
				printf("\n");
				getch();
				system("cls");
				break;
		case 5: display();
				getch();
				system("cls");
				break;
		case 6: exit(0);
				break;
		}
	}
}

	
