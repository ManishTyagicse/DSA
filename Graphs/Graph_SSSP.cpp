#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ipair;
int main()
{
    int V,E;
    cout<<"\nEnter no of vertices: ";
    cin>>V;
    cout<<"\nEnter no of edges: ";
    cin>>E;
    cout<<endl;
    vector<pair<int,int>> adjlist[V];
    for(int i=1;i<=E;i++)
    {
        cout<<"Enter edge and weight: "<<i<<" ";
        int a,b,cost;
        cin>>a>>b>>cost;
        adjlist[a].push_back({b,cost});
    }
    cout<<"\nThe adjacency list of the directd graph is: \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<adjlist[i].size();j++) 
            cout<<adjlist[i][j].first<<" ,"<<adjlist[i][j].second<<"->";
        cout<<"\n";
    }

    cout<<"\nEnter the source: ";
    int source=0;
    cin>>source;
    
    vector<int> PQ(V,0);
    vector<int> distance(V,INT_MAX);
    vector<int> predecessor(V,-1);

    priority_queue<ipair,vector<ipair>,greater<ipair>> pq;

    distance[source]=0;
    pq.push({0,source});//distance,vertex

    for(int i=1;i<V;i++)
    {
        pq.push({INT_MAX,i});
    }

    for(int i=1;i<=V-1;i++)
    {
        pair<int,int> x=pq.top();
        pq.pop();

        int v=x.second;
        PQ[v]=1;
        for(int j=0;j<adjlist[v].size();i++)
        {
            int vertex=adjlist[v][j].first;
            int weight=adjlist[v][j].second;
            if(PQ[vertex]==0 && distance[vertex]>weight+distance[v])
            {
                distance[vertex]=weight+distance[v];
                predecessor[vertex]=v;
                pq.push({distance[vertex],vertex});
            }
        }
    }
    cout<<"\nshortest path from source is: \n";
    cout<<"vertex distance "<<" predecessor \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<"\t";
        cout<<distance[i]<<"\t";
        cout<<predecessor[i]<<"\t";
        cout<<"\n";
    }

    return 0;
}