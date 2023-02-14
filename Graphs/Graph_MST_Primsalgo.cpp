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
        adjlist[b].push_back({a,cost});
    }
    cout<<"\nThe adjacency list of the undirectd graph is: \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<adjlist[i].size();j++) 
            cout<<adjlist[i][j].first<<" ,"<<adjlist[i][j].second<<"->";
        cout<<"\n";
    }
    
    vector<int> MST(V,0);
    vector<int> key(V,INT_MAX);
    vector<int> predecessor(V,-1);

    priority_queue<ipair,vector<ipair>,greater<ipair>> pq;

    key[0]=0;
    pq.push({0,0});//key,vertex

    for(int i=1;i<V;i++)
    {
        pq.push({INT_MAX,i});
    }

    for(int i=1;i<=V-1;i++)
    {
        pair<int,int> x=pq.top();
        pq.pop();

        int v=x.second;
        MST[v]=1;
        for(int j=0;j<adjlist[v].size();i++)
        {
            int vertex=adjlist[v][j].first;
            int weight=adjlist[v][j].second;
            if(MST[vertex]==0 && key[vertex]>weight)
            {
                key[vertex]=weight;
                predecessor[vertex]=v;
                pq.push({key[vertex],vertex});
            }
        }
    }
    cout<<"\nMST of the graph is: \n";
    cout<<"vertex key "<<" predecessor \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<"\t";
        cout<<key[i]<<"\t";
        cout<<predecessor[i]<<"\t";
        cout<<"\n";
    }

    return 0;
}