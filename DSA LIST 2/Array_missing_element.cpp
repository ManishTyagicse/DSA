#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]={0,1,2,3,4,6};
    int i;
    int DAT[7]={0};
    for(i=0;i<=6;i++)
    {
        DAT[arr[i]]++;
    }
    for(i=0;i<=6;i++)
    {
        if(DAT[i]==0)
        {
            cout<<"Element missing "<<i<<" ";
        }
    }
    return 0;
}