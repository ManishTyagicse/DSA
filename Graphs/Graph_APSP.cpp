#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V,E;
    int INF=INT_MAX/2;
    cout<<"\nEnter no of vertices: ";
    cin>>V;

    cout<<endl;
    int weightmat[V][V];
    int D[V][V];
    cout<<"\nInput the weight matrix: \n";
    for(int i=0 ; i<V ; i++)
    {
        for(int j=0 ; j<V ; j++)
        {
            cin>>weightmat[i][j];
            if(i!=j)
            {
                if(weightmat[i][j]==0)
                    D[i][j]=INF;
                else
                    D[i][j]=weightmat[i][j];
            }
            else 
                D[i][j]=0;
        }
    }

    cout<<"\nThe adjacency matrix of the directed graph is: \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<V;j++)
        {
            cout<<weightmat[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int k=0;k<V;k++)
    {
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                D[i][j]=min(D[i][j],(D[i][k]+D[k][j]));
            }
        }
    }

    cout<<"\nAll pairs shortest paths are: \n";
    for(int i=0;i<V;i++)
    {
        cout<<i<<": ";
        for(int j=0;j<V;j++)
        {
            cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}