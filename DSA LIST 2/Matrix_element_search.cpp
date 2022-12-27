#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mat[10][10];
    int i,j,k,n,m;
    cout<<"Enter the value of n and m \n";
    cin>>n>>m;
    int key,flag=-1;
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
    cout<<"Enter the element you want to search\n";
    cin>>key;
    cout<<"\n";
    i=0;
    j=m-1;
    while(i<n && j>=0)
    {
        if(mat[i][j]==key)
        {
            flag=1;
            cout<<"Element found at indices: "<<i+1<<" "<<j+1;
            break;
        }
        else
        if(mat[i][j]>key)
            j--;
        else
            i++;    
    }
    if(flag==-1)
    cout<<"Element not found";
    return 0;
}