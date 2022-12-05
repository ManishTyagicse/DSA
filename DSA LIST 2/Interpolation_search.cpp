#include<bits/stdc++.h>
using namespace std;
int  interpolationsearch(int arr[],int beg,int end,int key)
{
    int pos=0;;
    if((beg<=end&&key>=arr[beg])&&key<=arr[end])
    {
        pos=beg+((end-beg)*(key-arr[beg]))/(arr[end]-arr[beg]);
        if(key==arr[pos])
        {
            return pos;
        }
        else
        if(key>arr[pos])
        {
            return interpolationsearch(arr,pos+1,end,key);
        }
        else 
        if(key<arr[pos])
        {
            return interpolationsearch(arr,beg,pos-1,key);
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
    index=interpolationsearch(arr,0,n-1,key);
    cout<<"Element found at index="<<index;

    return 0;
}