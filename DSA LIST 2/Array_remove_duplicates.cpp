#include<bits/stdc++.h>
using namespace std;
void remove_duplicate(int arr[],int n)
{
    int i;
    int size=1;
    for(i=1;i<n;i++)
    {
        if(arr[i]!=arr[size-1])
        {
            arr[size]=arr[i];
            size++;
        }
    }
    cout<<"Elements of the array are\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,arr[100],i;
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
    remove_duplicate(arr,n);

    return 0;
}