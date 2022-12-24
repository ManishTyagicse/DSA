#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int mid,int e)
{
    int n1=mid-s+1,n2=e-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[s+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[(mid+1)+i];
    }
    int i=0,j=0,k=s;
    while(i<n1&&j<n2)
    {
        if(left[i]<right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }    
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }    
}
void  merge_sort(int arr[],int s,int e)
{
    if(s<e)
    {
        int mid=s+(e-s)/2;
        merge_sort(arr,s,mid);
        merge_sort(arr,mid+1,e);
        merge(arr,s,mid,e);
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
    merge_sort(arr,0,n-1);
    cout<<"Array after sort is=";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
} 