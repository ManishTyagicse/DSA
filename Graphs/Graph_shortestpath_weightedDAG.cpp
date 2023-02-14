#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> adjlist[], int s, bool visited[],stack<int> &st) 
{ 	
    visited[s] = true; 
 
	for(int v:adjlist[s])
    {
		if(visited[v]==false)
        {
            DFS(adjlist,v,visited,st);
		}
	} 
	st.push(s);
}

void TopologicalDFSshortestpath(vector<int> adjlist[],int V,int s,vector<vector<int>> weight)
{
    bool visited[V]; 
	for(int i = 0;i<V; i++) 
		visited[i] = false;
    
    stack<int> st;
		
    for(int i=0;i<V;i++){
        if(visited[i]==false)
            DFS(adjlist,i,visited,st);
    }

    vector<int> distance(V,INT_MAX);
    distance[s]=0;

    while (st.empty() == false) 
	{  
		int u = st.top(); 
		st.pop(); 
 
		if (distance[u]!=INT_MAX) 
		{ 
		    for (int v:adjlist[u]) 
			    if (distance[v] > distance[u] + weight[u][v]) 
				    distance[v] = distance[u] + weight[u][v]; 
		} 
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

    vector<vector<int>> weight;
    for(int i=0 ; i<V ; i++)
    {
        for(int j=0 ; j<V ; j++)
        {
            weight[i][j]=0;
        }
    }
    cout<<"\nEnter the weight of the edges: ";
    for(int i=1;i<E+1;i++)
    {
        cout<<"Enter edge and weight: "<<i<<" ";
        int a,b,w;
        cin>>a>>b>>w;
        weight[a][b]=w;
    }
    
    int source;
    cout<<"\nEnter the source: ";
    cin>>source;
    cout<<"\nThe shortest path of the directd graph is: ";
    TopologicalDFSshortestpath(adjlist,V,source,weight);
    
    return 0;
}