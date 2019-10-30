#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5

typedef struct que{
	int que_arr[MAXSIZE];
	int rear;
	int front;	
} QUEUE;
QUEUE q;


void insert(){
	int no;
	if(q.rear==MAXSIZE-1 && q.front<=q.rear)
	{	printf("Front %d\n",q.front);
		printf("Last %d\n",q.rear);
		printf("Queue Overflow, Insertion not possible\n");
	}
	else {
		if(q.front>q.rear){
			q.front=-1;
			q.rear=-1;
		}
		if(q.front==-1)
		{
			q.front=0;
		}
		printf("Front %d\n",q.front);
		printf("Last %d\n",q.rear);
		printf("Enter number you want to insert in the queue\n");
		scanf("%d",&no);
		q.rear++;
		q.que_arr[q.rear]=no;
		printf("Number Inserted\n");
	}
	getch();
	system("cls");
}

void dele()
{	int no;
	if(q.front>q.rear || (q.front== -1 && q.rear==-1) )
	{
		printf("Queue is Empty, Deletion not possible\n");
		
	}
	else{
		no=q.que_arr[q.front];
		q.front++;
		printf("Number %d deleted from queue",no);
	}
	getch();
	system("cls");
}

void display()
{	int i;
	if(q.front>q.rear || (q.front== -1 && q.rear==-1) )
	{
		printf("Queue is Empty\n");
		
	}
	else{
		for(i=q.front;i<=q.rear;i++)
		{
			printf("%d ",q.que_arr[i]);
		}
	}
	getch();
	system("cls");
}
int main()
{	q.front=-1;
	q.rear=-1;
	int choice,no;
	while(1){
		printf("Queue using array\n");
		printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: insert();
					break;
			case 2: dele();
					break;
			case 3: display();
					break;
			case 4: exit(0);
					break;
		}
	}
	
}
