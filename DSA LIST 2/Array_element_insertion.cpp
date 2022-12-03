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
    cout<<"Enter the position and the element you want to insert";
    cin>>pos>>x;
    n=n+1;
    for(i=n-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=x;
    cout<<"Array after the change is\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}