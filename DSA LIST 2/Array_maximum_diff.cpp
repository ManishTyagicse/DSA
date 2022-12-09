#include<bits/stdc++.h>
using namespace std;
void max_diff(int arr[],int n)
{
    int diff=arr[1]-arr[0];
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
          diff=max(diff,arr[j]-arr[i]);
       }
    }
    cout<<"Maximum diff in the array is "<<diff;
}
int main()
{
    int n,arr[100],i;
    cout<<"Enter the size and the elements of the array\n";
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
    max_diff(arr,n);

    return 0;
}