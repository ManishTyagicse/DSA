#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> adjlist[], int s, bool visited[]) 
{ 	
	visited[s] = true; 
	cout<<s<< " "; 
	for(int u:adjlist[s])
    {
		if(visited[u]==false)
        {
            DFS(adjlist,u,visited);
		} 
	} 
}

void DFScall(vector<int> adjlist[], int V){
    bool visited[V]; 
	for(int i = 0;i<V; i++) 
		visited[i] = false;
		
    for(int i=0;i<V;i++){
        if(visited[i]==false)
            DFS(adjlist,i,visited);
    }
}

int main()
{
    int V,E;
    cout<<"\nEnter no of vertices: ";
    cin>>V;
    cout<<"\nEnter no of edges: ";
    cin>>E;
    cout<<endl;
    vector<int> adjlist[V];
    for(int i=1;i<=E;i++)
    {
        cout<<"Enter edge: "<<i<<" ";
        int a,b;
        cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }
    
    cout<<"\nThe DFS traversal of the undirectd graph is: ";
    DFScall(adjlist,V);
    
    return 0;
}