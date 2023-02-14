#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> adjlist[], int s, bool visited[],int V) 
{ 	
    vector<int> distance(V,INT_MAX);
    distance[s]=0;
    queue<int>  q;
	visited[s] = true; 
	q.push(s); 

	while(q.empty()==false) 
	{ 
		int u = q.front(); 
		q.pop();
		for(int v:adjlist[u]){
		    if(visited[v]==false)
            {
                distance[v]=distance[u]+1;
		        visited[v]=true;
		        q.push(v);
		    }
		} 
	} 
    for(int i:distance)
        cout<<i<<" ";
}

void BFScall(vector<int> adjlist[], int V){
    bool visited[V]; 
	for(int i = 0;i<V; i++) 
		visited[i] = false;
		
    for(int i=0;i<V;i++){
        if(visited[i]==false)
            BFS(adjlist,i,visited,V);
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
    
    cout<<"\nThe shortest distance of the undirectd graph is: ";
    BFScall(adjlist,V);
    
    return 0;
}