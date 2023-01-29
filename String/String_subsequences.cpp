#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    cout<<"Enter the string1 ";
    getline(cin,str);
    cout<<"\nEnter the string2 ";
    getline(cin,str2);
    int i=0,j=0,m=str.length(),n=str2.length();
    while(i<m && j<n)
    {
        if(str[i]==str2[j])
        {
            j++;
        }
        i++;
    }
    if(n==j)
        cout<<"\nSubsequence string is present :";
    else
        cout<<"\nSubsequence string is not present :";
    return 0;
}