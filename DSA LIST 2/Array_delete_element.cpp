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
    cout<<"Enter the element you want to delete";
    cin>>pos;
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    cout<<"Array after the change is\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}