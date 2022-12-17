#include<bits/stdc++.h>
using namespace std;
int  firstoccur(int arr[],int size,int key)
{
    int beg=0,end=size-1; 
    while(beg<=end)
    { 
       int mid1=(beg+end)/2;
       if(arr[mid1]<key)
        beg=mid1+1;
       else 
       if(arr[mid1]>key) 
        end=mid1-1;
       else
       {
            if(mid1==0||arr[mid1-1]!=arr[mid1])
                return mid1;
            else
                end=mid1-1;  
       }
    }
    return -1;
}
int  lastoccur(int arr[],int size,int key)
{
    int beg=0,end=size-1; 
    while(beg<=end)
    { 
       int mid2=(beg+end)/2;
       if(arr[mid2]<key)
        beg=mid2+1;
       else 
       if(arr[mid2]>key) 
        end=mid2-1;
       else
       {
            if(mid2==size-1||arr[mid2+1]!=arr[mid2])
                return mid2;
            else
                beg=mid2+1;  
       }
    }
    return -1;
}
int main()
{
    int arr[100];
    int i,n,key=0,index,mid1,mid2;
    cout<<"Enter the size and the elements of the array\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to search\n";
    cin>>key;
    mid1=firstoccur(arr,n,key);
    mid2=lastoccur(arr,n,key);
    cout<<"Element occured "<<(mid2-mid1)+1<<" times";

    return 0;
}