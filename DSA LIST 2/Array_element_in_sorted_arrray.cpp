#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int pos,x,i,n;
    cout<<"Enter the size and the elements of the array\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";   
    }
    cout<<"Enter the element you want to insert";
    cin>>x;
    n=n+1;
    for(i=n-1;i>=0;i--)
    {   
        if(arr[i-1]>=x)
        arr[i]=arr[i-1];
        else
        pos= i;
    }
    arr[pos]=x;
    cout<<"Array after the change is\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}