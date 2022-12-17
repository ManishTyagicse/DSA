#include<bits/stdc++.h>
using namespace std;
int  binarysearch(int arr[],int beg,int end,int key)
{
    int mid=(beg+end)/2;
       if(beg>end)
        return -1;
       if(arr[mid]==key)
       return mid;
       else 
       if(arr[mid]<key)
        return binarysearch(arr,mid+1,end,key);
       else 
       if(arr[mid]>key) 
        return binarysearch(arr,beg,mid-1,key);

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
    index=binarysearch(arr,0,n-1,key);
    cout<<"Element found at index="<<index;

    return 0;
} 