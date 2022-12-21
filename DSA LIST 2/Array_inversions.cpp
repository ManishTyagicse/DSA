#include<bits/stdc++.h>
using namespace std;
int  array_inversion(int arr[],int n)
{
    int i,j,count=0;
    for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n;j++)
       {
        if(arr[i]>arr[j])
        {
            count++;
        }
       }
    }
    return count;
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
    ans=array_inversion(arr,n);
    cout<<"Total number of inversions="<<ans;

    return 0;
} 