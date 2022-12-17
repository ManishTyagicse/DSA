#include<bits/stdc++.h>
using namespace std;
int  lastoccur(int arr[],int size,int key)
{
    int beg=0,end=size-1; 
    while(beg<=end)
    { 
       int mid=(beg+end)/2;
       if(arr[mid]<key)
        beg=mid+1;
       else 
       if(arr[mid]>key) 
        end=mid-1;
       else
       {
            if(mid==size-1||arr[mid+1]!=arr[mid])
                return mid;
            else
                beg=mid+1;  
       }
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
    index=lastoccur(arr,n,key);
    cout<<"Element found at index="<<index;

    return 0;
}