//stack of array

#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct stack{
	int stk[50];
	int top;
}STACK;
STACK s;
int e,i,num,option;

void push(STACK s,int num);
int pop(STACK s);
void display();
void peep(int num);


int main()
{	
 	s.top=-1;
	do{	
		cout<<endl;
 		cout<<"1. PUSH an element"<<endl;
	 	cout<<"2. POP an element"<<endl;
		cout<<"3. Display Stack"<<endl;
		cout<<"4. Peep an element"<<endl;
		cout<<endl<<"Choose your option: ";
		cin>>option;
		cout<<endl;
		
		switch(option)
		{
				case 1:
					{	cout<<"Enter Value of Element:";
						cin>>num;
						push(s,num);	
					}
					break;
				case 2:
					{
						num = pop(s);
					}
					break;
				case 3:
					{
						display();
						}	
					break;
				case 4: 
					{
						cout<<"Enter element you wish to peep: ";
						cin>>num;
						peep(num);
					}
				default:
					exit(0);
			}
	}while(option!=4);
	
	return 0;
 }
 


void push(STACK s,int num)
{
	if(s.top==50-1)
	{
		cout<<"Stack Overflowed"<<endl<<endl;
	}
	else
	{
		s.top = s.top + 1;
		s.stk[s.top]=num;	
	}
}

int pop(STACK s)
{
	if(s.top==-1)
	{
		cout<<"Stack Underflow"<<endl<<endl;
	}
	else
	{	
		num=s.stk[s.top];
		s.top--;
		return num;
	}
}

void display()
{
    if (s.top == -1)
    {
        cout<<"Stack is empty\n";
        return;
    }
    else
    {
        cout<<endl<<" Elements of the Stack are: "<<endl;
        for (i = s.top; i >= 0; i--)
        {
           cout<<s.stk[i]<<endl;
        }
    }
    cout<<endl;
}

void peep(int num)
{
	STACK s2;
	s2.top = -1;
	while(s.stk[s.top] != num)
	{
		e = pop(s);
		push(s2,e);	
	}
	if(s.top == -1)
	{
		cout<<"Element is not present in stack";
	}
	else
	{
		cout<<"Element: "<<s.stk[s.top]<<" is present in the stack";
	}
	while(s2.top != -1)
	{
		e = pop(s2);
		push(s,e);
	}
}

