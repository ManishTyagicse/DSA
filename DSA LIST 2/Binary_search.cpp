#include<bits/stdc++.h>
using namespace std;
int  binarysearch(int arr[],int size,int key)
{
    int beg=0,end=size-1;
    int mid=(beg+end)/2;
    while(beg<=end)
    {
       if(arr[mid]==key)
       return mid;
       else 
       if(arr[mid]<key)
        beg=mid+1;
       else 
       if(arr[mid]>key) 
        end=mid-1;
    }
    return -1;
}
int main()
{
    int arr[100];
    int i,n,key=0,index;
    cout<<"Enter the size and the elements of the array\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to search\n";
    cin>>key;
    index=binarysearch(arr,n,key);
    cout<<"Element found at index="<<index;

    return 0;
}