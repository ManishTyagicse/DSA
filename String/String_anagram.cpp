#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    cout<<"Enter the string1 ";
    getline(cin,str);
    cout<<"\nEnter the string2 ";
    getline(cin,str2);
    int DAT[26]={0};
    int i=0,j=0,m=str.length(),n=str2.length();
    if(m!=n)
        cout<<"\nStrings are not anagram:";
    else
    {
        for(i=0;i<m;i++)
        {
            DAT[str[i]-'a']++;
            DAT[str2[i]-'a']--;
        }
    }
    int flag=-1;
    for(i=0;i<26;i++)
    {
        if(DAT[i]!=0)
        {
            cout<<"\nStrings are not anagram:";
            flag=1;
            break;
        }
    }
    if(flag==-1)
        cout<<"\nStrings are anagram:";
    return 0;
}