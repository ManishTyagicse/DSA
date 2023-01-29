#include<bits/stdc++.h>
using namespace std;
int leftnonrepeating(string str)
{
    int firstindex[26];
    fill(firstindex,firstindex+26,-1);
    for(int i=0;i<str.length();i++)
    {
        if(firstindex[str[i]]==-1)
            firstindex[str[i]]=i;
        else
            firstindex[str[i]]=-2;
    }
    int res=INT_MAX;
    for(int i=0;i<26;i++)
    {
        if(firstindex[i]>=0)
        {
            res=min(res,firstindex[i]);
        }
    }
    if(res==INT_MAX)
        return -1;
    else
        return res;
}
int main()
{
    string str;
    cout<<"Enter the string1 ";
    getline(cin,str);
    int lmnre=leftnonrepeating(str);
    cout<<"\nThe leftmost non repeating element is: "<<lmnre;
    return 0;
}