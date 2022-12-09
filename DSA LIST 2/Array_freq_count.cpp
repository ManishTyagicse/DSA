#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],i,max;
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
    max=arr[n-1];
    int DAT[max+1]={0};
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        DAT[arr[i]]++;
    }
    for(i=0;i<n;i++)
    {
        cout<<"Element "<<arr[i]<<" count "<<DAT[arr[i]]<<"\n";
    }

    return 0;
}
