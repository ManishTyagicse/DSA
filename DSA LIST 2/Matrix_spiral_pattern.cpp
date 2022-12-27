#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mat[10][10];
    int i,j,k,n,m;
    cout<<"Enter the value of n and m\n";
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
        for(j=0;j<m;j++)
        {
            cout<<mat[i][j]<<" ";
        }
    }
    cout<<"\n";
    int top=0;
    int right=m;
    int bottom=n;
    int left=0;
    cout<<"Boundary elements\n";
    while(top<=bottom && left<=right)
    {
        for(i=left;i<right;i++)
        {
            cout<<mat[top][i]<<" ";     
        }
        top++;
        cout<<"\n";
        for(i=top;i<bottom;i++)
        {
            cout<<mat[i][right]<<" "; 
        }
        right--;
        cout<<"\n";
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
             cout<<mat[bottom][i]<<" ";  
            }
            bottom--;
        }
        cout<<"\n";
        if(left<=right)
        {
            for(i=bottom;i>=top;i--)
            {
                cout<<mat[i][left]<<" ";    
            }
            left++;
        }
    }
    return 0;
}