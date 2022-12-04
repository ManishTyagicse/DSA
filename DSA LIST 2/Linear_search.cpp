#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={1,3,2,6,4,5,9,7,8,10};
    int i,pos=-1,key;
    cout<<"Enter the key to search \n";
    cin>>key;
    for(i=0;i<10;i++)
    {
       if(key==arr[i])
       pos=i;
    }
    if(pos==-1)
    cout<<"Element not found ";
    else
    cout<<"Element found at index "<<pos;
    return 0;
}