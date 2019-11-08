// Double Linked List

#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

typedef struct record{
	char name[20];
	int roll;
	char branch[10];
	int sem;
	struct record *next;
	struct record *prev;
}dlist;

dlist *start=NULL, *end=NULL, *node, *ptr, *temp;
int i, n, op, num ;

void create(int n)
{	
	node=new dlist;
	start = node;
	node->prev=NULL;
	for(i=0;i<n;i++)
	{
		if(node==NULL)
		{
			cout<<"\nMemory not available"<<endl;
			exit(0);
		}	
		cout<<"Name: ";
		cin>>node->name;
		cout<<"Roll number: ";
		cin>>node->roll;
		cout<<"Branch: ";
		cin>>node->branch;
		cout<<"Semester: ";
		cin>>node->sem ;
		cout<<endl;		
		node->next=new dlist;
		node->next->prev = node;
		if(i<n-1){
			node= node->next;
		}
	}
	node->next = NULL;
	end = node;
}

void Start()
{
	ptr = start;
	while(ptr !='\0')
	{
		cout<<"Name: "<<ptr->name<<endl;
		cout<<"Roll number: "<<ptr->roll<<endl;
		cout<<"Branch: "<<ptr->branch<<endl;
		cout<<"Semester: "<<ptr->sem <<endl;
		ptr = ptr->next;
	}
}

void End()
{
	ptr = end;
	while(ptr != NULL)
	{
		cout<<"Name: "<<ptr->name<<endl;
		cout<<"Roll number: "<<ptr->roll<<endl;
		cout<<"Branch: "<<ptr->branch<<endl;
		cout<<"Semester: "<<ptr->sem <<endl;
		ptr = ptr->prev ;
	}
}

void insertion(int num)
{
	temp=new dlist;
	if(temp==NULL)
		{
			cout<<"\nMemory not available"<<endl;
			exit(0);
		}
		temp->next=NULL;
		temp->prev=NULL;
		
		cout<<"Name: ";
		cin>>temp->name;
		cout<<"Roll number: ";
		cin>>temp->roll;
		cout<<"Branch: ";
		cin>>temp->branch;
		cout<<"Semester: ";
		cin>>temp->sem ;
		
		if(num == 1)
		{
			temp->next = start;
			start->prev = temp;
			temp->prev = NULL;
			start = temp;
		}
		else if(num == n+1)
		{
			temp->prev = end;
			end->next = temp;
			temp->next = NULL;
			end = temp;
		}
		else
		{
			ptr = start;
			for(i=0;i<=num;i++)
			{
				if(i==num-2)
				{
					temp->next = ptr->next;
					ptr->next->prev = temp;
					temp->prev = ptr;
					ptr->next = temp;
				}
				ptr = ptr->next;
			}
		}
	n++;
}

void deletion(int num)
{
	if(start==NULL)
	{
		cout<<"\nUNDERFLOW"<<endl;
		exit(0);
	}
	ptr=start;
	
	if(num == 1)
	{
		temp = start;
		start = temp->next;
		temp->next->prev = NULL;
		free(temp);
	}
	else if(num == n)
	{
		temp = end;
		end = temp->prev;
		temp->prev->next = NULL;
		free(temp);
	}
	else
	{
		for(i=0;i<=num;i++)
		{
			if(i==num-1)
			{
				temp = ptr;
				temp->next->prev = temp->prev;
				temp->prev->next = temp->next;
				temp->next = NULL;
				temp->prev = NULL;
				free(temp);
			}
			ptr = ptr->next;
		}
	}n--;
}

void update(int num)
{
	ptr=start;
	for(i=0;i<=num;i++)
	{
		if(i==num-1)
		{
			cout<<"Name: ";
			cin>>ptr->name;
			cout<<"Roll number: ";
			cin>>ptr->roll;
			cout<<"Branch: ";
			cin>>ptr->branch;
			cout<<"Semester: ";
			cin>>ptr->sem ;
		}
	ptr = ptr->next;
	}
}

void search(int num)
{	
	for(i=0;i<=num;i++)
	{
		if(i==num-1)
		{
			cout<<"Name: "<<ptr->name;
			cout<<"Roll number: "<<ptr->roll;
			cout<<"Branch: "<<ptr->branch;
			cout<<"Semester: "<<ptr->sem ;
		}
	ptr = ptr->next;
	}
	
}

int main()	
{	
	int xroll;
	cout<<"Student Database\n\n";
	cout<<"1. Create a DLL\n";
	cout<<"2. Traverse the list\n";
	cout<<"3. Insert a record \n";
	cout<<"4. Delete a record \n";
	cout<<"5. Update a record \n";
	cout<<"6. Search a record \n";
	cout<<"8. Exit \n";
		
	do{
		cout<<"Choose your option: ";
		cin>>op;
		cout<<endl;
		
		switch(op)
		{
			case 1:
				{
					cout<<"Enter number of Nodes in DLL: ";
					cin>>n;
					create(n);
				}
				break;
			case 2:
				{	
					cout<<"\n1. Traversing the List from Start to End."<<endl;
					cout<<"2. Traversing the List from End to Start."<<endl;
					int option;
					cout<<"\nChoose your method: ";
					cin>>option;
					
					if(option==1)
					{
						Start();
					}
					else
					{
						End();
					}
				}
				break;
			case 3:
				{
					cout<<"Enter Position of Newnode: ";
					cin>>num;
					insertion(num);
				}
				break;
			case 4:
				{
					cout<<"Enter the number of record to be deleted: ";
					cin>>num;
					deletion(num);
				}
				break;
			case 5:
				{
					cout<<"Enter the number of node to be updated: ";
					cin>>num;
					update(num);
				}
				break;
			case 6:
				{
					cout<<"Enter the number of node to be searched: ";
					cin>>num;
					search(num);
				}
				break;
				default: 
					exit(0);
		}
		cout<<endl;
	}while(op!=8);
	
	return 0;
}
