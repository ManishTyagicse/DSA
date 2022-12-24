#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    int i=s-1,j=e+1;
    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<pivot);
        do
        {
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
        return j;
        swap(arr[i],arr[j]);  
    }
    return pivot;
}
void  quick_sort(int arr[],int s,int e)
{
    if(s<e)
    {
        int p=partition(arr,s,e);
        quick_sort(arr,s,p);
        quick_sort(arr,p+1,e);
        
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
    quick_sort(arr,0,n-1);
    cout<<"Array after sort is=";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
} 