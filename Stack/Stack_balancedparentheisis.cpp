#include"mystackchar.h"
bool match(char a,char b)
{
    if(a=='('&&b==')'||a=='{'&&b=='}'||a=='['&&b==']')
    return 1;
    else 
    return 0;
}
bool check_parenthesis(string str)
{
    int len=str.length();
    mystackchar s(len);
    for(char x:str)
    {
        if(x=='('||x=='{'||x=='[')
        s.push(x);
        else
        {
            if(s.isempty()==1)
                return 0;
            else
            if(match(s.peak(),x)==0)
                return 0;
            else
                s.pop();
        }
    }
    if(s.isempty()==1)
     return 1;
    else
     return 0;

}
int main()
{
    string str;
    cout<<"Enter the expression of parenthesis: ";
    cin>>str;
    if(check_parenthesis(str)==1)
        cout<<"\nExpresion is balanced:";
    else
        cout<<"\nExpresion is not balanced:";
    return 0;
}