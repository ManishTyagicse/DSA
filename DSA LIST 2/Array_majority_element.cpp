#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100],i,max=arr[0];
    cout<<"Enter the size and the elements of the array in the binary format\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        if(arr[0]<arr[i])
        max=arr[i];
    }
    cout<<"Elements of the array are\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int DAT[max+1]={0};
    for(i=0;i<n;i++)
    {
        DAT[arr[i]]++;
    }
    int flag=-1;
    for(i=0;i<n;i++)
    {
        if(DAT[arr[i]]>n/2)
        {
            flag=arr[i];
        }
    }
    if(flag==-1)
    cout<<"No majority element";
    else
    cout<<"Majority element is "<<flag;
    return 0;
}