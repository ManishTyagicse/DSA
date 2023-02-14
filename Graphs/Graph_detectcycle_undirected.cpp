#include<bits/stdc++.h>
using namespace std;

bool DFS(vector<int> adjlist[], int s, bool visited[],int parent) 
{ 	
	visited[s] = true; 
 
	for(int u:adjlist[s])
    {
		if(visited[u]==false)
        {
            if(DFS(adjlist,u,visited,s)==true)
                return true;
		} 
        else
        if(u!=parent)
            return true;
	} 
    return false;
}

bool checkcycle(vector<int> adjlist[], int V)
{
    bool visited[V]; 
	for(int i = 0;i<V; i++) 
		visited[i] = false;
		
    for(int i=0;i<V;i++){
        if(visited[i]==false)
        {
            if(DFS(adjlist,i,visited,-1)==true)
            return true;
        }
    }
    return false;
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
    
    cout<<"\nCheck if any cycle is present or not: "<<checkcycle(adjlist,V);
    
    
    return 0;
}