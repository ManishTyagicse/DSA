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
    int Adjmat[V][V];
    for(int i=0 ; i<V ; i++)
    {
        for(int j=0 ; j<V ; j++)
        {
            Adjmat[i][j]=0;
        }
    }
    for(int i=1;i<E+1;i++)
    {
        cout<<"Enter edge: "<<i<<" ";
        int a,b;
        cin>>a>>b;
        Adjmat[a][b]=1;
    }
    cout<<"\nThe adjacency matrix of the directed graph is: \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<V;j++)
        {
            cout<<Adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}