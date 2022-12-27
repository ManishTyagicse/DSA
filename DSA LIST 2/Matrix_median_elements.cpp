#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mat[10][10];
    int i,j,k=0,n,m;
    int arr[100];
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
        for(j=0;j<n;j++)
        {
            arr[k]=mat[i][j];
            k++;
        }
    }
    if(k%2!=0)
    {
        cout<<"Median elements of the array are\n";
        cout<<arr[k/2];
    }
    else
    {
        cout<<"Median elements of the array are\n";
        cout<<arr[(k-1)/2]<<arr[k/2];
    }

    return 0;
}