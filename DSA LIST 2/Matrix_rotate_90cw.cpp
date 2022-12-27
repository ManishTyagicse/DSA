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
        for(j=0;j<n;j++)
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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
    cout<<"Elements of the matrix after transpose are\n";
    for(i=0;i<n;i++)
    {
        cout<<" \n";
        for(j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
    }
    cout<<"Elements of the matrix after 90cw rotation are\n";
    for(i=0;i<n;i++)
    {
        cout<<" \n";
        for(j=n-1;j>=0;j--)
        {
            cout<<mat[i][j]<<" ";
        }
    }
    return 0;
}