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
        cout<<"\nPeak element of the stack is "<<arr[top];
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
            cout<<"\nDeleted element is "<<res;
        }
    }
    int size()
    {
        cout<<"\nSize of the stack is "<<top+1;
    }
    bool isempty()
    {
        if(top==-1)
            cout<<"\nStack is empty ";
        else
            cout<<"\nStack is not empty ";
    }
};
int main()
{
    int n;
    cout<<"Enter the size of the stack ";
    cin>>n;
    mystack s(n);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.peak();
    s.pop();
    s.pop();
    s.peak();
    s.isempty();


    return 0;
}