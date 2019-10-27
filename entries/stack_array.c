#include<stdio.h>
#include<stdlib.h>
#define size 10

int top=-1;

void push(int s[],int data);
int pop(int s[]);
int peep(int s[]);
void update(int s[]);
void display(int s[]);
void search(int s[]);


void main()
{
int s[size];
int n,d;
do{
printf("\n\nenter choice:\n");
printf("1.push\n2.pop\n3.peep\n4.udpate\n5.display\n6.search\n7.EXIT!\n");
scanf("%d",&n);
switch(n){

	case 1:
		printf("\nenter data:");
		scanf("%d",&d);
		push(s,d);
		break;
	
	case 2: d=pop(s);
		printf("\npoped element is:%d",d);break;

	case 3: d=peep(s);
		printf("\nelement is:%d",d);break;

	case 4:update(s);break;
	case 5:display(s);break;
	case 6:search(s);break;
	case 7: exit(1);
	default:printf("\nenter valid input");break;}
}while(n!=7);
} 


void push(int s[],int data){
	if(top==size-1){printf("\nstack overflow");return;}
	top++;
	s[top]=data;}

int pop(int s[]){
int p;
if(top==-1){printf("\nunderflow\n");p=0;	}

else {p=s[top];top--;}
return p;}


void display(int s[]){

if(top==-1){printf("\nstack is empty!"); return ;}
for(int i=top;i>=0;i--){
	printf("\n%d",s[i]);
	}
}

int peep(int s[]){
	int loc,pe;
	if(top==-1){printf("\nstack is empty!");return 0;}
	int back_stack[size];
	printf("\nenter location:");
	scanf("%d",&loc);
	
	if((top-loc+1)<0){
		printf("element does not exist!");
		pe=0;	
		}

	else{
	int k=0;
	for(int j=top;j>loc;j--)
		{back_stack[k++]=s[j];
		s[j]=0;}

	pe=s[loc];
k=k-1;
	//reconstruct stack
	for(int j=loc+1;j<=top;j++)
		s[j]=back_stack[k--];
		
		}
return pe;}

void update(int s[]){
int loc,d;
	if(top==-1){printf("\nstack is empty!");return;}
	int back_stack[size];
	printf("\nenter location:");
	scanf("%d",&loc);
	
	if((top-loc+1)<0){
		printf("element does not exist!");
		}

	else{printf("\nenter new value:");
	scanf("%d",&d);
	
	int k=0;
	for(int j=top;j>loc;j--)
		{back_stack[k++]=s[j];s[j]=0;}

	s[loc]=d;
k=k-1;	
	//reconstruct stack
	for(int j=loc+1;j<=top;j++)
		s[j]=back_stack[k--];
		}
}

void search(int s[]){
int d;
	if(top==-1){printf("\nstack is empty!");return;}
	int back_stack[size];
	printf("\nenter data:");
	scanf("%d",&d);
	int k=0,flag=0,j;
	for(j=top;j>=0;j--){
		if(s[j]!=d)
		{back_stack[k++]=s[j];s[j]=0;}
		else {flag=1;break;}		
		}

	if(flag==1){printf("\n%d is present in stack!",d);}
	else{printf("\n%d is not present in stack!",d);}

k=k-1;
	//reconstruct stack
	for(j=j+1;j<=top;j++)
		s[j]=back_stack[k--];
}
