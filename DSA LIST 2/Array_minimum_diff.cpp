#include<bits/stdc++.h>
using namespace std;
int min(int arr[],int n)
{
    sort(arr,arr+n);
    int res=INT_MAX;
    for(int i=1;i<n;i++)
    {
        int diff=0;
        diff=arr[i]-arr[i-1];
        res=min(res,diff);
    }
    return res;
}
int main()
{
    int arr[100];
    int i,n,ans;
    cout<<"Enter the size and the elements of the array\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans=min(arr,n);
    cout<<"The minimum diff of the array is="<<ans;
    
    return 0;
} 