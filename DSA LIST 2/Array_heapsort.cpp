#include<bits/stdc++.h>
using namespace std;
void maxheapify(int arr[],int size,int i)
    {
        int largest=i;
        int lfch=2*i+1,rtch=2*i+2;
        if(lfch<size && arr[lfch]<arr[i])
            largest=lfch;
        if(rtch<size && arr[rtch]<arr[largest])
            largest=rtch;
        if(largest!=i)
        {
            swap(arr[i],arr[largest]);
            maxheapify(arr,size,largest);
        }
    }

    void buildheap(int arr[],int size)
    {
        for(int i=(size-2)/2;i>=0;i--)
            maxheapify(arr,size,i);
    }

    void heapsort(int arr[],int n)
    {
        buildheap(arr,n);
        for(int i=n-1;i>=0;i--)
        {
            swap(arr[0],arr[i]);
            maxheapify(arr,i,0);
        }
    }

int main()
{
    int arr[100];
    int i,n,ans;
    cout<<"Enter the size and the elements of the array\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    heapsort(arr,n);
    cout<<"Array after sorting is=";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}