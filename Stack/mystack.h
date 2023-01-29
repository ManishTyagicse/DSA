#include<bits/stdc++.h>
using namespace std;
struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    void push(int x)
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
    int peak()
    {
        return arr[top];
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"\nStack underflow ";
            exit(0);
        }
        else
        {
            int res=arr[top];
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