#include<bits/stdc++.h>
using namespace std;
void max_sum_subarray(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
            curr=curr+arr[j];
            res=max(res,curr);
        }
    }
    cout<<"Maximum sum in the subarray is "<<res;
}
int main()
{
    int n,arr[100],i;
    cout<<"Enter the size and the elements of the array in the binary format\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the array are\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    max_sum_subarray(arr,n);

    return 0;
}