#include<bits/stdc++.h>
using namespace std;
bool checkrotatedstring(string &s1,string &s2)
{
    if(s1.length()!=s2.length())
        return false;
    else
        return ((s1+s2).find(s2)!=string::npos);
}
int main()
{
    string s1,s2;
    cout<<"Enter the string text ";
    getline(cin,s1);
    cout<<"Enter the string pattern ";
    getline(cin,s2);
    int ans=checkrotatedstring(s1,s2);
    cout<<"\nThe answer is: "<<ans;
    return 0;
}