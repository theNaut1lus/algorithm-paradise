#include<iostream>

using namespace std;

void print_paren(int s[100][100], int x, int y)
{
	if(x==y)
	cout<<"A"<<x;
	
	else
	{
		cout<<"(";
		int a;
		a=s[x][y];
		print_paren(s,x,a);
		print_paren(s,a+1,y);
		cout<<")";
	}
}

int main()
{
	int size,n,i,j,k,l,num,z;
	
	cout<<"Enter the matrix chain size: ";
	cin>>n;
	
	num=n+1;
	int p[num]; //declaring the implementation array
	
	cout<<"Specify the matrix dimensions in the form of implementation array: ";
	for(i=0;i<num;i++)
	cin>>p[i];
	
	cout<<"The Implementation array is: ";
	for(i=0;i<num;i++)
	cout<<"\t"<<p[i];
	
	int cost[n][n];  // matrix conatining the cost of each subproblem
	int split[100][100];  // matrix conatining the splittance point for each subproblem
	
	for(i=0;i<n;i++)
	{
		cost[i][i]=0;
		split[i][i]=-1;
	}
	
	for(l=2;l<=n;l++)
	{
		for(i=0;i<n-l+1;i++)
		{
			j=i+l-1;
			cost[i][j]=INT_MAX;
			cost[j][i]=0;
			split[j][i]=-1;
			for(k=i;k<j;k++)
			{
				int q=0;
				q=q+cost[i][k]+cost[k+1][j]+(p[i]*p[k+1]*p[j+1]);
				if(q<cost[i][j])
				{
					cost[i][j]=q;
					split[i][j]=k;
				}
			}
		}
	}
	
	cout<<endl<<endl<<"The Cost Matrix is:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<cost[i][j]<<"\t\t";
		}
		cout<<endl;
	}

	
	cout<<endl<<endl<<"The Splittance Matrix is:"<<endl;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<split[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl<<"The paranthesised expression is: ";
	print_paren(split,0,n-1);
	
	return 0;
}
