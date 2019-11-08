#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<string.h>

void create();
void insert();
void del();
void traverse();
void search();
void report();


struct record
{
	char roll_no[10];
	char name[100];
	char branch[20];
	char sem[1];
	struct record*next;
};
struct record*start=NULL,*p,*q,*t;

int main()
{
	int choice;
    do{
	printf("\n1.Create a record\n");
	printf("2.Insert a record\n");
	printf("3.Delete a record\n");
	printf("4.Traverse the record \n");
	printf("5.Search a record \n");
	printf("6.Report generation \n");
	printf("7.exit\n");
	printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		    create();
    		    break;
        case 2:
        	    insert();
        	    break;
        case 3 :
        	    del();
        	    break;
        case 4:
        	    traverse();
        	    break;	    
        case 5: 
                search();
                break;
        case 6: 
                report();
                break;
        case 7:  
                exit(0);
               
		default:
		        printf("wrong choice");	
				break;
 }
        }while(choice!=7);
return 0;
}
//creation of record
void create()
{
	    int n,i,s;
	 
        printf("enter number of records");
        scanf("%d",&n);
        
        printf("\nEnter the data value for the %d record:\n",n);
        for(i=0;i<n;i++)
        {
        	 p=(struct record *)malloc(sizeof(struct record));
        	  printf("Roll no. of student:");
        scanf("%s",&p->roll_no);
        printf("Name of student:");
        scanf("%s",&p->name);
        printf("Branch of student:");
        scanf("%s",&p->branch);
        printf("Semester of student:");
        scanf("%s",&p->sem);
        p->next=NULL;
      

  if(start==NULL)
  {
   start=p;
  }
  else
  {
    q=start;
    while(q->next!=NULL)
    q=q->next;
    q->next=p;
  }}

}
//insertion of a record
void insert()
{

char r[10];
int flag=0;
printf("\nEnter the roll number you want to insert after that:");
scanf("%s",r);
t=start;
while(t!=NULL)
{
if(strcmpi(r,t->roll_no)==0)
{
 printf("\nEnter the data value of the record:\n");
        p=(struct record *)malloc(sizeof(struct record));
        
        	  printf("Roll no. of student:");
        scanf("%s",&p->roll_no);
        printf("Name of student:");
        scanf("%s",&p->name);
        printf("Branch of student:");
        scanf("%s",&p->branch);
        printf("Semester of student:");
        scanf("%s",&p->sem);
p->next=t->next;
t->next=p;
printf("\nThe record is inserted!!\n");
flag=1;
break;
}
t=t->next;
}
if(flag==0)
printf("The record is not found!!!\n");

}
//deletion of a record
void del()
{

 
    char rollno[10];
    struct record* temp, *prev;
    printf("Enter the roll no u want to delete\n");
    scanf("%s",&rollno);
    temp=start;
    prev=start;
    while(temp!=NULL)
    {
            if(strcmp(rollno,temp->roll_no)==0&&temp==start)
            {
                start=start->next;
                free(temp);
                break;

            }
            else
            {



                 temp=temp->next;
                if(strcmp(rollno,temp->roll_no)==0)
                {
                   prev->next=temp->next;
                temp->next=NULL;
                   free(temp);
                   break;


                }
               prev=prev->next;

}

}

}
//traversing the record
void traverse()
{

  
	p=start;
   printf("\tRoll no.\t\t Name\t\t Branch\t\tSemester\t\n")	;


	 
   while(p!=NULL)

 {
   
 	printf("\n\t %s\t\t%s\t\t%s\t\t%s ",p->roll_no,p->name,p->branch,p->sem);
 p=p->next;
}


}
//searching a record
void search()   
{

char r[10];
int flag=0;

printf("\nEnter the roll number you want to search:");
scanf("%s",r);

t=start;
 while(t!=NULL)
{
if(strcmpi(r,t->roll_no)==0)
{
printf("\nThe roll number is found in the list!!!\n");
printf("\tRoll no.\t\t Name\t\t Branch\t\tSemester\t\n");
printf("\t\t %s\t\t%s\t\t%s\t\t%s ",t->roll_no,t->name,t->branch,t->sem);
printf("\n\n");
flag=1;
break;
}t=t->next;
}
if(flag==0)
printf("\nThe roll number is not in the database!!");
}
//report
void report()
{

char s[20];
int count=0,choice;
printf("\n1.Based on semester\t2.Based on branch\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
 	printf("Enter semester you want the report:\n");
 	scanf("%s",&s);

 	t=start;
 while(t!=NULL){
{
if(strcmpi(s,t->sem)==0)
{
count++;
printf("\tRoll no.\t\t Name\t\t Branch\t\t\n");
printf("\t\t %s\t\t%s\t\t%s ",t->roll_no,t->name,t->branch);
printf("\n\n");

}t=t->next;
}
printf("total no. of students in sem%s are %d\n",s,count);

break;

case 2:
 	printf("Enter branch of which you want the report:\n");
 	scanf("%s",&s);
 		 
 	t=start;
while(t!=NULL)
{
if(strcmpi(s,t->branch)==0)
{
count++;
printf("\tRoll no.\t\t Name\t\t Semester\t\t\n");
printf("\t\t %s\t\t%s\t\t%s ",t->roll_no,t->name,t->sem);
printf("\n\n");

}t=t->next;
}
printf("total no. of students in branch%s are %d\n",s,count);

break;
}
}
}
 	

