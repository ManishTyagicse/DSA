#include<bits/stdc++.h>
using namespace std;
void patternsearchingimproved(string &text,string &pattern)
{
    int m=text.size();
    int n=pattern.size();
    int flag=-1,index=0;
    for(int i=0;i<=m-n;)
    {
       for(int j=0;j<n;j++)
       {
        if(pattern[j]!=text[i+j])
            break;
        if(j==n)
        {
            index=i; 
            flag=1;
            break;
        }
        if(j==0)
            i++;
        else
            i=(i+j);
       }
    }
    if(flag==-1)
     cout<<"\n\a\a\a\a\aPattern was not found: ";
    else
        cout<<"\n\a\a\a\aPattern was found at the index: "<<index<<" ";
}
int main()
{
    string text,pat;
    cout<<"Enter the string text ";
    getline(cin,text);
    cout<<"Enter the string pattern ";
    getline(cin,pat);
    patternsearchingimproved(text,pat);
    return 0;
}