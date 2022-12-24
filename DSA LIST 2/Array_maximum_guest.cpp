#include<bits/stdc++.h>
using namespace std;
int maxguests(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=0,j=0,res=1,currguest=0;
    while(i<n&&j<n)
    {
        if(arr[i]<=dep[j])
        {
            currguest++;
            i++;
        }
        else
        {
            currguest--;
            j++;
        }
        res=max(res,currguest);
    }
    return res;
}
int main()
{
    int arr[100],dep[100];
    int i,n,ans;
    cout<<"Enter the size and the arrival time";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter departure time";
    for(i=0;i<n;i++)
    {
        cin>>dep[i];
    }
    ans=maxguests(arr,dep,n);
    cout<<"The max number of guest is="<<ans;
    
    return 0;
} 