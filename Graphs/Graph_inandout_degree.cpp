#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int V,E;
    cout<<"\nEnter no of vertices: ";
    cin>>V;
    cout<<"\nEnter no of edges: ";
    cin>>E;
    cout<<endl;

    vector<int> indegree(V,0);
    vector<int> outdegree;
    vector<int> adjlist[V];

    for(int i=1;i<=E;i++)
    {
        cout<<"Enter edge: "<<i<<" ";
        int a,b;
        cin>>a>>b;
        adjlist[a].push_back(b);
        indegree[b]++;
    }
    cout<<"\nThe adjacency list of the directd graph is: \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<adjlist[i].size();j++) 
            cout<<adjlist[i][j]<<"->";
        cout<<"\n";
    }
   
    
    for(int i=0;i<V;i++)
    {
        outdegree.push_back(adjlist[i].size());
    }
    cout<<"\nThe outdegree of the vertices is: \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<": "<<outdegree[i]<<"\n";
    }

    cout<<"\nThe indegree of the vertices is: \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<": "<<indegree[i]<<"\n";
    }


return 0;
}