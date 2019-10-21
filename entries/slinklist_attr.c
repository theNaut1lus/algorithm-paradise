#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[26];
    char sem[1];
    char branch[10];
    char roll_no[7];
    struct student* next;
}*head=NULL;

void create()
{
    int n,i;
    struct student* temp,*newnode;
    printf("Enter the number of students you want to enter\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(struct student*)malloc(sizeof(struct student));
        printf("Enter the name of student %d:",i);
        scanf("%s",newnode->name);
        printf("Enter the semester of student %d:",i);
        fflush(stdin);
        scanf("%s",newnode->sem);
        printf("Enter the branch of student %d:",i);
        fflush(stdin);
        scanf("%s",newnode->branch);
        printf("Enter the roll number of student %d:",i);
        fflush(stdin);
        scanf("%s",newnode->roll_no);



        if(head==NULL)
        {

            head=(struct student*)malloc(sizeof(struct student));
            head=newnode;
            head->next=NULL;
            temp=head;


        }
        else{
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;

        }
    }


}
void traverse()
{
    int i=1;
    struct student* temp;
    temp=head;
    if(head==NULL)
    {
        printf("The list was empty\n");
    }
    while(temp!=NULL)
          {
              printf("\nthe student%d \n1.Name:%s\n2.Roll No:%s\n3.Semester:%s\n4.Branch:%s\n",i,temp->name,temp->roll_no,temp->sem,temp->branch);
              temp=temp->next;
            i++;

          }
}

void insert()
{
    int i;
    int position;
    struct student* temp, *ptr;
    struct student* newnode;
    printf("Enter the position where you want to insert\n");
    scanf("%d",&position);
    newnode=(struct student*)malloc(sizeof(struct student));
        printf("Enter the name of student");
        scanf("%s",newnode->name);
        printf("Enter the semester of student");
        scanf("%s",newnode->sem);
        printf("Enter the branch of student");
        scanf("%s",newnode->branch);
        printf("Enter the roll number of student");
        scanf("%s",newnode->roll_no);


if(position==1)
{
       newnode->next=head;
       head=newnode;


}
 if(position>1)
 {


    temp=head;

           for(i=1;i<position-1;i++)
    {
        if(temp==NULL)
        {
            printf("The given element does not exist\n");
            exit(1);
        }
        else
            {
                temp=temp->next;
        }

    }
    ptr=head;
    for(i=1;i<=position-1;i++)
    {
      ptr=ptr->next;
    }




    newnode->next=NULL;
    temp->next=newnode;
    temp=temp->next;
    temp->next=ptr;
 }


}
void deletion()
{
    char rollno[7];
    struct student* temp, *prev;
    printf("Enter the roll no u want to delete\n");
    scanf("%s",&rollno);
    temp=head;
    prev=head;
    while(temp!=NULL)
    {
            if(strcmp(rollno,temp->roll_no)==0&&temp==head)
            {
                head=head->next;
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
void search()
{
    char rollno[7];
    int flag=0,count=1;
    struct student* temp;
    printf("Enter the roll no you want to search\n");
    scanf("%s",&rollno);
    temp=head;
    while(temp!=NULL)
    {
        if(strcmp(rollno,temp->roll_no)==0)
        {
            printf("the element found at position %d\n",count);
            flag++;
            break;

        }
        temp=temp->next;
        count++;
    }
if(flag==0)
{
    printf("element not found\n");
}
}
void count()
{
    struct student* temp;
    int count=0;
    temp=head;
    if(temp==NULL)
    {
        printf("The list is empty\n");
    }
    else{
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        printf("%d\n",count);

    }


}
void update()
{
    struct student* temp;

    char rollno[7];
    int flag;
    temp=head;
    printf("Enter the roll no you want to update\n");
    scanf("%s",rollno);
    while(temp!=NULL)
    {
        if(strcmp(rollno,temp->roll_no)==0)
        {

        printf("Enter the name of student");

        scanf("%s",temp->name);


        printf("Enter the semester of student");

        scanf("%s",temp->sem);
        printf("Enter the branch of student");
        scanf("%s",temp->branch);

         printf("Enter the roll number of student");

        scanf("%s",temp->roll_no);



                flag++;
                break;



       }
        temp=temp->next;
    }
    if(flag==0)
    {
        printf("roll number not found\n");
    }



}
int main()
{
    int choice;
do{

    printf("\n1.Create\n");
    printf("2.Display\n");
    printf("3.Insert\n");
    printf("4.Delete\n");
    printf("5.Search\n");
    printf("6.Count the nodes present\n");
    printf("7.Update\n");
    printf("8.Exit\n");
    printf("Enter the choice you want to enter\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        create();
        continue;
    case 2:
        traverse();
        continue;
    case 3:
        insert();
        continue;
    case 4:
         deletion();
         continue;
    case 5:
        search();
        continue;
    case 6:
        count();
        continue;
    case 7:
        update();
        continue;
    default:
        printf("Enter a valid choice");
        continue;




    }}while(choice!=8);
    return 0;
}

