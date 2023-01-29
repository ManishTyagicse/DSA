#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int i=0,j=str.length()-1,flag=-1;
    while(i<=j)
    {
        if(str[i]==str[j])
        {
            flag=1;
            i++;
            j--;
        }
        else
        {
            cout<<"\n String is not palindrome";
            break;
        }
    }
    if(flag==1)
    {
        cout<<"\nString is palindrome";
    }
    return 0;
}