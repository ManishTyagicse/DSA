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
    vector<int> adjlist[V];
    for(int i=1;i<=E;i++)
    {
        cout<<"Enter edge: "<<i<<" ";
        int a,b;
        cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }
    cout<<"\nThe adjacency list of the undirectd graph is: \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<adjlist[i].size();j++) 
            cout<<adjlist[i][j]<<"->";
        cout<<"\n";
    }
    
    return 0;
}