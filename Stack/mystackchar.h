#include<bits/stdc++.h>
using namespace std;
struct mystackchar
{
    char *arr;
    int cap;
    int top;
    mystackchar(int c)
    {
        cap=c;
        arr=new char[cap];
        top=-1;
    }
    void push(char x)
    {
        if(top==(cap-1))
        {
            cout<<"\nStack overflow ";
            exit(1);
        }
        else
        {
             top++;
            arr[top]=x;
        }
    }
    char peak()
    {
        return arr[top];
    }
    char pop()
    {
        if(top==-1)
        {
            cout<<"\nStack underflow ";
            exit(0);
        }
        else
        {
            char res=arr[top];
            top--;
            return res;
        }
    }
    int size()
    {
        return top+1;
    }
    bool isempty()
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }
};