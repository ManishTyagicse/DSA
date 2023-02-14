#include<bits/stdc++.h>
using namespace std;

void BFSsort(vector<int> adjlist[], int s, bool visited[],vector<int> indegree) 
{ 	

    queue<int>  q;
	visited[s] = true; 
    if(indegree[s]==0 )
	    q.push(s); 
        
	while(q.empty()==false) 
	{ 
		int u = q.front(); 
		q.pop();
        cout<<u<<" ";
		for(int v:adjlist[u])
        { 
                indegree[v]--;
                if(indegree[v]==0)
		        q.push(v);
		} 
	}
}

void TopologicalBFS(vector<int> adjlist[], int V,vector<int> indegree)
{
    bool visited[V]; 
	for(int i = 0;i<V; i++) 
		visited[i] = false;
		
    for(int i=0;i<V;i++){
        if(visited[i]==false)
            BFSsort(adjlist,i,visited,indegree);
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

    vector<int> indegree(V,0);
    vector<int> adjlist[V];

    for(int i=1;i<=E;i++)
    {
        cout<<"Enter edge: "<<i<<" ";
        int a,b;
        cin>>a>>b;
        adjlist[a].push_back(b);
        indegree[b]++;
    }
    
    cout<<"\nThe topological BFS sort of the directed graph is: ";
    TopologicalBFS(adjlist,V,indegree);
    
    return 0;
}