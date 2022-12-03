#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8]={0,1,2,2,3,4,5,6};
    int i;
    int DAT[7]={0};
    for(i=0;i<=6;i++)
    {
        DAT[arr[i]]++;
    }
    for(i=0;i<=6;i++)
    {
        if(DAT[i]>1)
        {
            cout<<"Element repeating is "<<i<<" \n";
        }
        else 
            cout<<"Non repeating element is "<<i<<" \n";
    }
    return 0;
}