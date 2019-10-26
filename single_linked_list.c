#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct record{
	char roll_no[10];
	char name[10];
	char branch[10];
	int sem;
	struct record *next;
};
typedef struct record list;
list *node;
list *start,*start1,*start2;
list *node1,*new;
void create(list *);
void traversal(list *);
void del(list *);
void insertion(list *);
void search(list *);
void report(list *);
int main()
{
	int choice;
	start=start1=start2=node;
	node=(list *)malloc(sizeof(list));
	do{
		printf("1.create\n");
		printf("2.traverse\n");
		printf("3.delete\n");
		printf("4.insert\n");
		printf("5.search\n");
		printf("6.report\n");
		printf("7.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create(node);
				break;
			case 2:
				traversal(node);
				break;
			case 3:
				del(node);
				break;
			case 4:
				insertion(node);
				break;
			case 5:
				search(node);
				break;
			case 6:
				report(node);
				break;
			case 7:
				exit(0);
			default:
				printf("you entered wrong choice:\n");
				break;
		}
				
      }while(choice!=7);
return 0;
}
void create(list *node)
{
	int i,n;
	printf("enter the value of number of students:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the roll no.\n");
		scanf("%s",&node->roll_no);
		printf("enter the name\n");
		scanf("%s",&node->name);
		printf("enter the branch:\n");
		scanf("%s",&node->branch);
		printf("enter the semester:\n");
		scanf("%d",&node->sem);
		node->next=(list *)malloc(sizeof(list));
		node=node->next;
	}
	node->next='\0';
}
void traversal(list *node)
{
	list *start1;
	start1=node;
	while(start1->next!=NULL)
	{
		printf("roll no-%s\n",start1->roll_no);
		printf("name-%s\n",start1->name);
		printf("branch-%s\n",start1->branch);
		printf("semester-%d\n",start1->sem);
		start1=start1->next;
	}
	
}
void del(list *node)
{
	char r[10];
	int flag=0;
	list *start,*node1;
	start=node;
	int pos;
	printf("enter the roll no to be deleted:\n");
	scanf("%s",r);
	while(start!=NULL)
	{
		if(strcmp(r,start->roll_no)==0)
		{
			node1=start;
			node1->next=node1->next->next;
			free(node1);
			printf("deletion successful:\n");
			flag=1;
		}
	else{
		start=start->next;}
	}
	if(flag==0)
	{
		printf("deletion not possible\n");
	}
}
void insertion(list *node)
{
	list *start2,*new;
	int flag=0;
	start2=node;
	char roll[10];
	char b[10];
	char nam[10];
	int semester;
	printf("enter the roll no. to be inserted after:\n");
	scanf("%s",roll);
	while(start2->next)
	{
		if(strcmp(roll,start2->roll_no)==0)
		{
			new=(list *)malloc(sizeof(list));
			printf("enter the data of new node:\n");
			printf("new roll no.:\n");
			scanf("%s",roll);
			printf("new  name:\n");
			scanf("%s",nam);
			printf("new branch:\n");
			scanf("%s",b);
			printf("new semester:\n");
			scanf("%d",&semester);
			new->next=start2->next;
			start2->next=new;
			strcpy(new->roll_no,roll);
			strcpy(new->name,nam);
			strcpy(new->branch,b);
			new->sem=semester;
			printf("insertion possible\n");
			flag=1;
		}
		start2=start2->next;break;
	}
	if(flag==0)
	{
		printf("insertion not possible:\n");
	}
}
void search(list *node)
{
	list *ptr;
	int flag=0;
	ptr=node;
	char rollno[10];
	printf("enter the roll number to be seacrhed:\n");
	scanf("%s",&ptr->roll_no);
	while(ptr->next!=NULL)
	{
		if(strcmp(rollno,ptr->roll_no)==0)
		{
			printf("record found:\n");
			printf("roll no: %s,name: %s,branch: %s,semester: %d\n",ptr->roll_no,ptr->name,ptr->branch,ptr->sem);
			flag=1;
		}
		ptr=ptr->next;
	}
	if(flag==0)
	{
		printf("record not found:\n");
	}
}
void report(list *node)
{
	char b[10];
	int s;
	int ch,count=0;
	int flag=0;
	list *pt;
	pt=node;
	printf("enter your choice to find the report:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("enter branch:\n");
			scanf("%s",&b);
			while(pt->next)
			{
				if(strcmp(b,pt->branch)==0)
				{
					count++;
					printf("roll no:%s,name %s,semester %d",pt->roll_no,pt->name,pt->sem);
					flag=1;
				}
				pt=pt->next;
			}
			printf("total students are:%d",count);
			if(flag==0)
			{
				printf("no student found:\n");
			}
			break;
		case 2:
			pt=node;
			printf("enter semester:\n");
			scanf("%d",&s);
			while(pt->next)
			{
				if(s==pt->sem)
				{
					count ++;
					printf("roll no %s,name %s,branch %s",pt->roll_no,pt->name,pt->branch);
					break;
				}
				pt=pt->next;
			}
			printf("total students are %d",count);
			break;
	}
}
