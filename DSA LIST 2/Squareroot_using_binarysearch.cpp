#include<bits/stdc++.h>
using namespace std;
int  squarerootfloor(int n)
{
    int beg=0,end=n;
    int ans=-1;
    while(beg<=end)
    {
       int mid=(beg+end)/2;
       int midsq=mid*mid;
       if(midsq==n)
       return mid;
       else 
       if(midsq>n)
        end=mid-1;
       else 
       {
         beg=mid+1;
         ans=mid;
       }
    }
    return ans;
}
int main()
{
    int ans,num;
    cout<<"Enter the number\n";
    cin>>num;
    ans=squarerootfloor(num);
    cout<<"Square root="<<ans;

    return 0;
}