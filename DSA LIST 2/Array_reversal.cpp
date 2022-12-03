#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int temp,i,n;
    cout<<"Enter the array size and the elements\n";
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
    int j=n-1;
    for(i=0;i<n/2;i++)
    {    
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        j--;
    }
    cout<<"Array after reverse is\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

