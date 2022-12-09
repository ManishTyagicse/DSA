#include<bits/stdc++.h>
using namespace std;
void max_onein_binary(int arr[],int n)
{
    int res=0,curr=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
           curr=0;
        else
        {
            curr++;
            res=max(res,curr);
        }
    }
    cout<<"Maximum 1's in the binary array are "<<res;
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
    max_onein_binary(arr,n);

    return 0;
}