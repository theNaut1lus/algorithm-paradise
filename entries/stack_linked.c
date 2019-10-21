#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack *next;};typedef struct stack sl;

sl* push(sl *top,int d)
	{sl *temp;
	temp=(sl*)malloc(sizeof(sl));
	if((top)==NULL){temp->next=NULL;}

	else{temp->next=(top);}
	temp->data=d;
	return temp;}

sl* pop(sl *top)
{sl *temp;
if((top)==NULL){printf("stack underflow!");}
else{ 	temp=top->next;
	free(top);
	top=temp;
	
	}
return top;}

void traverse(sl *top){
if(top==NULL){printf("stack is empty!");return;}
printf("\n\n\tTOP\n\t |\n\t v");
while(top!=NULL){

	printf("\n\t%d\n\t |\n\t v",top->data);

	top=top->next;}
printf("\n\tNULL");
}


void peep(sl*top,int data){
int flag=0;
int pos=0;
sl*tops=NULL;
//tops=(sl*)malloc(sizeof(sl));
while((top!=NULL) && (flag!=1)){
	if(top->data==data)
		flag=1;
	else
		{tops=push(tops,top->data);
			top=pop(top);
			pos++;}
	}
while(tops!=NULL){
top=push(top,tops->data);
tops=pop(tops);
}
if(flag==1){printf("\n%d is present in stack at %d position from TOP",data,pos);}
}


void update(sl*top,int data){


int flag=0;
sl*tops=NULL;
//tops=(sl*)malloc(sizeof(sl));
while((top!=NULL) && (flag!=1)){
	if(top->data==data)
		{flag=1;printf("enter new value:");
		scanf("%d",&(top->data));}
	else
		{tops=push(tops,top->data);
			top=pop(top);}
	}
while(tops!=NULL){
top=push(top,tops->data);
tops=pop(tops);
if(flag==0){printf("\n%d is not present in stack",data);}
}if(top==NULL) printf("%d does not exist in stack",data);
}

void main()
{sl *top;
top=NULL;
int data;
int n;
do{
	printf("\n\nentre choice:");
	printf("\n1.push()\n2.pop()\n3.peep()\n4.traverse\n5.update\n6.exit\n");
	scanf("%d",&n);
	switch(n){
		case 1:printf("\nenter data:\n");
			
			scanf("%d",&data);
			top=push(top,data);
			break;
		case 4:traverse(top);
			break;
		case 3:	
			printf("enter value to be peeped:");
			scanf("%d",&data);
			peep(top,data);
			break;
		case 5:
			printf("enter data to be updated:");
			scanf("%d",&data);
			update(top,data);
			break;

		case 6:exit(2);
			break;
		case 2: top=pop(top);
			break;
		}
}while(n!=6);
}
