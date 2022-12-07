#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
       for(j=0;j<n-i;j++)
       {
           if(arr[j]>arr[j+1])
           swap(arr[j],arr[j+1]);
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
    bubblesort(arr,n);
    return 0;
}