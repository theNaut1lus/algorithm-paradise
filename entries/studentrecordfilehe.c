#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
typedef struct student{
 char name[30];
 char rollno[20];
 char semester[20];
 char branch[20];
};
 FILE *fp;
 typedef struct student stud;
 int i;
 //TO CREATE RECORDS
void base(stud *studs);
int create(stud *studs,int);
void insert(stud *studs,int);
void disp(stud *studs,int);
void search(stud *studs);
void deleterecd(stud *studs);
void update(stud *studs);
void report(stud *studs);
int empty(stud *studs);
// MAIN PROGRAM
void main()
{
 stud studs[60];
 base(studs);
 save(studs);
}
int create(stud *studs,int n){
        for(i=0;i<n;i++){
            fflush(stdin);
            printf("Enter new name : \n");
            gets(studs[i].name);
            printf("\nEnter RollNo. : ");
            gets(studs[i].rollno);
            printf("\nEnter Semester : ");
            gets(studs[i].semester);
            printf("\nEnter Branch : ");
            gets(studs[i].branch);
        }
 return i;
}
//TO INSERT RECORDS TO THE FILE
void insert(stud *studs,int n)
{
 int x;
 printf("Enter Position where you want to insert\n");
 scanf("%d",&x);
 fflush(stdin);
 printf("Enter the Roll no   :");
 gets(studs[x].rollno);
 printf("Enter the Name      :");
 gets(studs[x].name);
 printf("Enter the semester   :");
 gets(studs[x].semester);
 printf("Enter the branch      :");
 gets(studs[x].branch);
 for(i=n;i>x-1;i--){
 studs[i+1]=studs[i];
}
n=n+1;
}
// TO DISPLAY RECORDS
void disp(stud *studs,int n)
{
 load(studs);
 printf("\nRoll Number\tName\tSemester\tBranch\n\n");
 for(i=0;i<n;i++){
 printf("%s\t\t%s\t%s\t%s\n",studs[i].rollno, studs[i].name, studs[i].semester, studs[i].branch);
}
}
//TO SEARCH THE GIVEN RECORD BASED ON RNO
void search(stud *studs)
{
    int x;
 FILE *fp2;
  char r[20];
 printf("\nSearch\n press 1. for RollNo.\n2. for name\n3. for semester\n4. for branch:\n");
 scanf("%d",&x);
 switch(x){
 case 1:
 fflush(stdin);
 printf("\nEnter the Roll no you want to search  :");
gets(r);
fflush(stdin);
  fp2 = fopen("recordFile", "r");
  while (fread(&studs, sizeof(studs), 1, fp2))
  {
   if (strcmp(studs->rollno,r)==0)
   {

    printf("\nRoll no = %s", studs->rollno);
    printf("\nName    = %s", studs->name);
    printf("\nBranch = %s", studs->branch);
    printf("\nSemester = %s", studs->semester);
   }
  }
  fclose(fp2);
  break;
 case 2:
 fflush(stdin);
 printf("\nEnter the name you want to search  :");
gets(r);
fflush(stdin);
  fp2 = fopen("recordFile", "r");
  while (fread(&studs, sizeof(studs), 1, fp2))
  {
   if (strcmp(studs->name,r)==0)
   {
    printf("\nRoll no = %s", studs->rollno);
    printf("\nName    = %s", studs->name);
    printf("\nBranch = %s", studs->branch);
    printf("\nSemester = %s", studs->semester);
   }
  }
  fclose(fp2);
  break;
 case 3:
 fflush(stdin);
 printf("\nEnter the semester you want to search  :");
gets(r);
fflush(stdin);
  fp2 = fopen("recordFile", "r");
  while (fread(&studs, sizeof(studs), 1, fp2))
  {
   if (strcmp(studs->semester,r)==0)
   {
    printf("\nRoll no = %s", studs->rollno);
    printf("\nName    = %s", studs->name);
    printf("\nBranch = %s", studs->branch);
    printf("\nSemester = %s", studs->semester);
   }
  }
  fclose(fp2);
  break;
 case 4:
    fflush(stdin);
 printf("\nEnter the branch you want to search  :");
gets(r);
fflush(stdin);
  fp2 = fopen("recordFile", "r");
  while (fread(&studs, sizeof(studs), 1, fp2))
  {
   if (strcmp(studs->branch,r)==0)
   {
    printf("\nRoll no = %s", studs->rollno);
    printf("\nName    = %s", studs->name);
    printf("\nBranch = %s", studs->branch);
    printf("\nSemester = %s", studs->semester);
   }
  }
  fclose(fp2);
  break;
 }
}
//TO DELETE A RECORD
void deleterecd(stud *studs)
{
 FILE *fpo;
 FILE *fpt;
 char r[20];
 fflush(stdin);
 printf("Enter the Roll no you want to delete :");
 gets(r);
  fpo = fopen("recordFile", "r");
  fpt = fopen("TempFile1", "w");
  while (fread(&studs, sizeof(studs), 1, fpo))
  {
   if (strcmp(studs->rollno,r)!=0)
    fwrite(&studs, sizeof(studs),1, fpt);
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("recordFile", "w");
  fpt = fopen("TempFile1", "r");
  while (fread(&studs, sizeof(studs), 1, fpt))
   fwrite(&studs, sizeof(studs), 1, fpo);
  printf("\nRECORD DELETED\n");
  fclose(fpo);
  fclose(fpt);
}
//TO UPDATE THE RECORD
void update(stud *studs)
{
 FILE *fpt;
 FILE *fpo;
 char r[20], ch;
 fflush(stdin);
 printf("Enter roll number to update:");
 gets(r);
  fpo = fopen("recordFile", "r");
  fpt = fopen("TempFile1", "w");
  while (fread(&studs, sizeof(studs), 1, fpo))
  {
   if (strcmp(studs->rollno,r) != 0){
    fwrite(&studs, sizeof(studs), 1, fpt);
    }
   else
   {
    printf("\n\t1. Update Name of Roll Number %s", r);
    printf("\n\t2. Update Roll No. of Roll Number %s", r);
    printf("\n\t3. Update Branch of Roll Number %s", r);
    printf("\n\t4. Update Semester of Roll Number %s", r);
    printf("\n\t5. Update all record Roll Number %s", r);
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
     printf("Enter Name:");
     gets(studs->name);
     break;
    case 2:
     printf("Enter Roll : ");
     gets(studs->rollno);
     break;
    case 3:
     printf("Enter Branch : ");
     gets(studs->branch);
     break;
    case 4:
     printf("Enter Semester : ");
     gets(studs->semester);
     break;
    case 5:
     printf("Enter Name: ");
     gets(studs->name);
     printf("Enter Roll No.: ");
     gets(studs->rollno);
      printf("Enter Semester: ");
     gets(studs->semester);
     printf("Enter Branch: ");
     gets(studs->branch);
     break;

    default:
     printf("Invalid Selection");
     break;
    }
    fwrite(&studs, sizeof(studs), 1, fpt);
   }
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("recordFile", "w");
  fpt = fopen("TempFile1", "r");
  while (fread(&studs, sizeof(studs), 1, fpt))
  {
   fwrite(&studs, sizeof(studs), 1, fpo);
  }
  fclose(fpo);
  fclose(fpt);
  printf("RECORD UPDATED");
}
void report(stud *studs)
{

    FILE *fp2;
    char r[20];
    int count=0,opt;
    printf("\n1. Based on semester\n2. Based on branch\n");
	scanf("%d",&opt);
	switch(opt)
	{
	    case 1:
        fflush(stdin);
        printf("\nEnter the semester you want to search  :");
        gets(r);
        fflush(stdin);
        fp2 = fopen("recordFile", "r");
            while (fread(&studs, sizeof(studs), 1, fp2))
            {
            if (strcmp(studs->semester,r)==0)
                {
                count++;
                printf("\nRoll no = %s", studs->rollno);
                printf("\nName    = %s", studs->name);
                printf("\nBranch = %s", studs->branch);
                printf("\nSemester = %s", studs->semester);
                }
            }
        fclose(fp2);
        printf("\nTotal number of students in %s semester are %d\n\n",r,count);
		break;

		case 2:
        fflush(stdin);
        printf("\nEnter the branch you want to search  :");
        gets(r);
        fflush(stdin);
        fp2 = fopen("recordFile", "r");
            while (fread(&studs, sizeof(studs), 1, fp2))
            {
            if (strcmp(studs->branch,r)==0)
                {
                count++;
                printf("\nRoll no = %s", studs->rollno);
                printf("\nName    = %s", studs->name);
                printf("\nBranch = %s", studs->branch);
                printf("\nSemester = %s", studs->semester);
                }
            }
        fclose(fp2);

printf("\nTotal number of students in %s branch are %d\n\n",r,count);
		break;
		default:
			break;
	}
}
//TO CHECK THE FILE IS EMPTY OR NOT
int empty(stud *studs)
{
 int c = 0;
 FILE *fp;
 fp = fopen("recordFile", "r");
 while (fread(&studs, sizeof(studs), 1, fp)){
  c = 1;
 }
 fclose(fp);
 return c;
}
void base(stud *studs){
int c, emp,n,b;
 do
 {
  printf("\n\t-----------------------Select your choice-----------------------\n");
  printf("\n\t1. CREATE THE RECORDS\n\t2. INPUT A RECORD\n\t3. DISPLAY\n\t4. SEARCH\n\t");
  printf("5. DELETE A RECORD \n\t6. UPDATE A RECORD\n\t7. REPORT GENERATION\n");

  printf("\t8. EXIT\n");
  printf("\n\t----------------------------------------------------------------\n");
  printf("\nEnter your choice:");
  scanf("%d", &c);
  printf("\n");
  switch (c)
  {
  case 1:
      printf("Enter no. of records to create \n");
      scanf("%d",&n);
      b=create(studs,n);
      break;
  case 2:
    insert(studs,b);
    break;
  case 3:
   emp = empty(studs);
   if (emp == 0)
    printf("\nThe file is EMPTY\n");
   else
    disp(studs,b);
   break;
  case 4:
   search(studs);
   break;
  case 5:
   deleterecd(studs);
   break;
  case 6:
   update(studs);
   break;
  case 7:
    report(studs);
    break;
  case 8:
   exit(1);
   break;
  default:
   printf("\nYour choice is wrong\nPlease try again...\n");
   break;
  }
 }
 while (c != 11);
}
void save(stud *studs)
{
    int s;
  fp=fopen("saving.txt","ab");
    if(fp==NULL){
        printf("Cannot open file\n");
        getch();
    }
    else
        printf("\nDo you want to save the data you entered :\n Enter 1 for yes and 2 for no :");
			fflush(stdin);
			scanf("%d",&s);
			if(s==1 && fp!=NULL)
                {
                    fwrite(&studs,sizeof(studs),1,fp);
					printf("Data saved\n");
                }
			else
				printf("File not saved\n");
        fclose(fp);
        getch();
}
void load(stud *studs)
{
    fp=fopen("saving.txt","ab");
    if(fp==NULL){
        printf("Cannot open file\n");
        getch();
    }
    else
        (fread(&studs, sizeof(studs), 1, fp));
 fclose(fp);
}
