#include<stdio.h>
#include<stdlib.h>

struct record{
	int info;
	int priority;
	struct record *next;
	struct record *prev;

};

typedef struct record pq;


void insert(pq **fr,pq **rr,int i,int p){
pq *node=(pq*)malloc(sizeof(pq));
node->info=i;
node->priority=p;

if(*fr==NULL){
		node->prev=NULL;		
		*fr=node;
		*rr=node;
		node->next=NULL;		
		}

else if(p>(*fr)->priority){
		(*fr)->next=node;
		node->prev=*fr;
		node->next=NULL;
		*fr=node;
		}

else if(p<=(*rr)->priority){
		node->next=*rr;
		(*rr)->prev=node;
		(*rr)=node;
		node->prev=NULL;
		
		}
else{
	pq *start=(*rr)->next;
	while((start->priority)<p){
		start=start->next;		
		}	

	start->prev->next=node;
	node->next=start;
	node->prev=start->prev;
	start->prev=node;
	}



}






void create(pq **fr,pq**rr){
int size;
printf("enter number of elements:");
scanf("%d",&size);
int info,priority;

while(size>0){
	printf("enter info:");
	scanf("%d",&info);
	
	printf("enter priority:");
	scanf("%d",&priority);

	size--;

	insert(fr,rr,info,priority);
	}

}



void display(pq *fr){
if(fr==NULL) {printf("\nqueue is empty!");}
printf("\n");
printf("\n%10s  %10s\n","DATA","PRIORITY");
	while(fr!=NULL)
		{
			printf("%10d ",fr->info);
			printf("%10d\n",fr->priority);
			fr=fr->prev;
		}


}



void delete(pq **fr){

	if(*fr==NULL){
		printf("\nunderflow!");
		return ;
		}
	pq *temp=*fr;
	*fr=(*fr)->prev;
	free(temp);

	}
void update(pq **fr,pq **rr){
	if(*fr==NULL) {printf("queue is empty!"); return ;}
	pq *start=*rr;
	int pt,npt,value,flag=0;
	printf("\nenter priority to be updated:");
	scanf("%d",&pt);
	printf("\nenter new priority:");
	scanf("%d",&npt);
	while((start)!=NULL){
			if(start->priority==pt){
			
				value=start->info;
				if(start==(*rr)){start->next->prev=NULL;
						*rr=start->next;
						}
				else if(start==(*fr)){start->prev->next=NULL;
							*fr=start->prev;
							}
				else{start->prev->next=start->next;
				start->next->prev=start->prev;
					}
				free(start);
				insert(fr,rr,value,npt);
				flag=flag+10;
				}
			else start=start->next;

			}
	if(flag==0) printf("%d priority doesn't exist in the queue!",pt);
	}

void main()
{

pq *front=NULL;
pq *rear=NULL;
int n;
do{
	printf("\nenter your choice:\n");
	printf("\n1.create\n2.insert\n3.delete\n4.update priority\n5.display\n6.exit\n");
	scanf("%d",&n);
	switch(n){
	
	case 1:
		if(front==NULL&&rear==NULL)
			create(&front,&rear);
		else printf("\nqueue is already created!");
		break;
	case 5:display(front);
		break;

	case 2:	printf("enter info:");
		int n,p;
		
		scanf("%d",&n);
		
		printf("enter priority:");
		scanf("%d",&p);
		insert(&front,&rear,n,p);
		break;

	case 3:delete(&front);
		break;

	case 4:update(&front,&rear);
		break;

	case 6:exit(4);

	}



}while(n!=6);


}
