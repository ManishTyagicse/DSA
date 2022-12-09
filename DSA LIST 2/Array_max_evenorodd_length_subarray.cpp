#include<bits/stdc++.h>
using namespace std;
void max_evenorodd_length_subbarray(int arr[],int n)
{
    int res=1;
    int curr=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0))
        {
            curr++;
            res=max(res,curr);
        }
        else
        curr=1;
    }
    cout<<"Maximum even-odd length in the subarray is "<<res;
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
    max_evenorodd_length_subbarray(arr,n);

    return 0;
}