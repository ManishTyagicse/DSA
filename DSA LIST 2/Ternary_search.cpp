#include<bits/stdc++.h>
using namespace std;
int  ternarysearch(int arr[],int size,int key)
{
    int beg=0,end=size-1;
    while(beg<=end)
    {
       int mid1=beg+((end-beg)/3);
       int mid2=end-((end-beg)/3);
       if(arr[mid1]==key)
       return mid1;
       else 
       if(arr[mid2]==key)
        beg=mid2;
       else 
       if(arr[mid1]>key) 
        end=mid1-1;
       else 
       if(arr[mid2]<key) 
        end=mid2+1;
       else 
       if(key>arr[mid1]&&key<arr[mid2]) 
        end=mid2-1;
        beg=mid1+1;  
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
    index=ternarysearch(arr,n,key);
    cout<<"Element found at index="<<index;

    return 0;
}