#include<bits/stdc++.h>
using namespace std;
void max_stock_profit(int arr[],int n)
{
    int profit=0;;
    for(int i=1;i<n;i++)
    {
       if(arr[i]>arr[i-1])
       {
        profit+=(arr[i]-arr[i-1]);
       }
    }
    cout<<"Maximum profit in the stock is "<<profit;
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
    max_stock_profit(arr,n);

    return 0;
}