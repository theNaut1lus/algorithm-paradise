#include<iostream>
using namespace std;
int graph[20][20], q[20],n,r=-1,f=0;//variable initialisation
bool visited[20];//variable initialisation

//function to perform depth first search
void dfs(int s){
	visited[s]=true;//mark start node as visited
	
	//loop to traverse the child nodes of the start node
	for(int i =1;i<=n;i++){
	
		if(graph[s][i]&&visited[i]==false)//if any child nodes that arent visited exist
			q[++r]=i;//enque them
		
			if(f<=r){//if there are elements in the queue
			visited[q[f]]=true;//mark hem as visited one by one
				cout<<q[f]<<"\t";//print them
			dfs(q[f++]);//perform their dfs
			}
}
}

//driver program
int main(){
	
	cout<<"*Depth First Search*"<<"\n";
	cout<<"Enter the no of vertices ";
	cin>>n;//no of vertices in the graph to be traversed
	cout<<"\n\nEnter the adjacency matrix for the graph, 1 if the edges are connected, else 0\n\n";//taking the graph input in the form of adjacency matrix 
	
	//loop for initialisation of adjacency matrix
	for(int i = 1;i<=n;i++){

			for(int j=1;j<=n;j++){
	
			cout<<"graph["<<i<<"]["<<j<<"]";
			cin>>graph[i][j];
		}
	}
	
	//loop for initialising the boolean visited array and the queue
	for(int i = 1;i<=n;i++){
	
		visited[i]=false;
		q[i]=0;
	}
	
	
	cout<<"\n\nNow enter the starting vertex for BFS ";
	int s;
	cin>>s;	
	
	//print the answer
	cout<<"\nThe vertices that are reachable from "<<s<<" are: ";
	dfs(s);
//	for (int i=1;i<=n;i++)
//    	  if(visited[i])
//    	   cout<<"\t"<<i; 
//		   else
//    	   cout<<"\n Bfs is not possible";
    	
	
	
	return 0;
}
