#include"mystack.h"
int operation(int a,int b,char c)
{
    switch(c)
    {
    case '+': return a+b;
    break;
    case '-': return a-b;
    break;
    case '*': return a*b;
    break;
    case '/': return a/b;
    break;
    case '^': return pow(a,b);
    break;
    }
}
int prefix_evaluation(string str1)
{
    int a,b,value=0;
    int len = str1.length();
    mystack s(len);
    int i;
    reverse(str1.begin(), str1.end());
    for(i=0;i<len;i++)   
    {
        if(isdigit(str1[i]))
            s.push(str1[i]-'0');
        else
        {
            b=s.pop();
            a=s.pop();
            value=operation(a,b,str1[i]);
            s.push(value);
        }
    }
    return abs(s.pop());
}
int main()
{
    string str1;
    cout<<"Enter the expression:";
    cin>>str1;
    cout<<"\nThe value of the postfix expression is: "<<prefix_evaluation(str1);
 
    return 0;
}