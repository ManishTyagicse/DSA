#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int minindex=i;
       for(j=i+1;j<n;j++)
       {
           if(arr[j]<arr[minindex])
           swap(arr[j],arr[minindex]);
       }
    }
    cout<<"Array after change is\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[100];
    int i, n;
    cout<<"Enter the size and the elements of the array\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
          cin>>arr[i];
    }
    cout<<"Elements of the array are\n";

    for(i=0;i<n;i++)
    {
          cout<<arr[i]<<" ";
    }
    selectionsort(arr,n);
    return 0;
}