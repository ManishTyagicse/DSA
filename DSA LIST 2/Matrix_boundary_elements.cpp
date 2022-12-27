#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mat[10][10];
    int i,j,k,n,m;
    cout<<"Enter the value of n and m \n";
    cin>>n>>m;
    cout<<"Enter the values of the matrix elements\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"Elements of the matrix are\n";
    for(i=0;i<n;i++)
    {
        cout<<" \n";
        for(j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
    }
    cout<<"\n";
    cout<<"Boundary elements\n";
    if(n==1)
    {
        for(i=0;i<m;i++)
            cout<<mat[0][i]<<" ";
    }
    else
    if(m==1)
    {
        for(i=0;i<n;i++)
            cout<<mat[i][0]<<" ";
    }
    else
    {
        for(i=0;i<m;i++)
        {
            cout<<mat[0][i]<<" ";  
        }
        cout<<"\n";
        for(i=1;i<n;i++)
        {
            cout<<mat[i][m-1]<<" ";  
        }
        cout<<"\n";
        for(int i=m-2;i>=0;i--)
        {
            cout<<mat[n-1][i]<<" ";  
        }
        cout<<"\n";
        for(i=n-2;i>=1;i--)
        {
            cout<<mat[i][0]<<" ";  
        }
    }
    return 0;
}