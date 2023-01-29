#include"mystackchar.h"
void check_palindrome(string str1)
{
    int flag=0;
    string str2;
    int len=str1.length();
    mystackchar s(len);
    for(char x:str1)
    {
        s.push(x);
    }
    for(int i=0;i<len;i++)
    {
        str2[i]=s.pop();
    }
    cout<<"\nReverse expression is: ";
    for(int i=0;i<len;i++)
    {
        cout<<str2[i];
    }
    for(int i=0;i<len;i++)
    {
        if(str1[i]==str2[i])
            flag++;
        else 
        {
            flag=-1;
            cout<<"\nExpression is not palindrome";
            break;
        }
    }
    if(flag==len)
        cout<<"\nExpression is palindrome";
        
}
int main()
{
    string str1;
    cout<<"Enter the expression:";
    cin>>str1;
    check_palindrome(str1);
 
    return 0;
}