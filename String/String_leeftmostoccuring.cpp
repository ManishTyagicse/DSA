#include<bits/stdc++.h>
using namespace std;
int leftmostrepeating(string str)
{
    bool visited[26]={false};
    int res=-1;
    for(int i=str.length()-1;i>=0;i--)
    {
        if(visited[str[i]])
            res=i;
        else
            visited[str[i]]=true;
    }
    return res;
}
int main()
{
    string str,str2;
    cout<<"Enter the string1 ";
    getline(cin,str);
    int lmre=leftmostrepeating(str);
    cout<<"\nThe leftmost repeating element is: "<<lmre;
    return 0;
}