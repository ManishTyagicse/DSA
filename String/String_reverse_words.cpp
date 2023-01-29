#include<bits/stdc++.h>
using namespace std;
void reverse(string &str,int start,int end)
{
    while(start<=end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
}
void reversewords(string str)
{
    int n=str.size();
    int start=0;
    for(int end=start;end<n;end++)
    {
        if(str[end]==' ')
        {
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
    
    cout<<"\nString after the reverse words is: "<<str;
}
int main()
{
    string str;
    cout<<"Enter the string1 ";
    getline(cin,str);
    reversewords(str);
    return 0;
}