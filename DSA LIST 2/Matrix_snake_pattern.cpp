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
    cout<<"snake pattern\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        if(i%2==0)
        {
            for( j=0;j<m;j++)
                cout<<mat[i][j]<<" ";
        }
        else
        {
            for( j=m-1;j>=0;j--)
                cout<<mat[i][j]<<" ";
        }
    }
    return 0;
}