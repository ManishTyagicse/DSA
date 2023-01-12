#include<bits/stdc++.h>
using namespace std;
int maxsumsubarray(int arr[],int n,int k)
{
    int curr=0;
    for(int i=0;i<k;i++)
    {
        curr=curr+arr[i];
    }
    int res=curr;
    for(int i=k;i<n;i++)
    {
        curr=curr+arr[i]-arr[i-k];
        res=max(res,curr);
    }
    return res;
}
int main()
{
    int arr[100];
    int i,n,ans,k;
    cout<<"Enter the size and the elements of the array\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the size of the subarray\n";
    cin>>k;
    ans=maxsumsubarray(arr,n,k);
    cout<<"The maximum sum subarray of the array is="<<ans;
    
    return 0;
} 