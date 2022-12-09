#include<bits/stdc++.h>
using namespace std;
void leader(int arr[],int n)
{
    int i;
    int curr_ldr=arr[n-1];
    cout<<curr_ldr<<" ";
    for(i=n-2;i>=0;i--)
    {
       if(arr[i]>curr_ldr)
        {
            curr_ldr=arr[i];
            cout<<curr_ldr<<" ";
        }
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
    cout<<"\n";
    cout<<"Array leaders are\n";
    leader(arr,n);

    return 0;
}