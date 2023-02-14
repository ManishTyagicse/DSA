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

void TopologicalDFS(vector<int> adjlist[], int V)
{
    bool visited[V]; 
	for(int i = 0;i<V; i++) 
		visited[i] = false;
    
    stack<int> st;
		
    for(int i=0;i<V;i++){
        if(visited[i]==false)
            DFS(adjlist,i,visited,st);
    }
    while(st.empty()==false)
    {
        cout<<st.top()<<" ";
        st.pop();   
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
    
    cout<<"\nThe topological DFS sort of the directd graph is: ";
    TopologicalDFS(adjlist,V);
    
    return 0;
}