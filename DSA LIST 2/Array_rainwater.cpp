#include<bits/stdc++.h>
using namespace std;
int getwater(int arr[],int n)
{
    int res=0;
    int lmax[n],rmax[n];

    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
        lmax[i]=max(lmax[i-1],arr[i]);
    
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(rmax[i+1],arr[i]);

    for(int i=1;i<n;i++)
        res=res+(min(lmax[i],rmax[i])-arr[i]);

    return res;
}
int main()
{
    int arr[5]={3,0,1,2,5};
    cout<<"\nAmount of rainwater that can be stored is: "<<getwater(arr,5);
    return 0;
}