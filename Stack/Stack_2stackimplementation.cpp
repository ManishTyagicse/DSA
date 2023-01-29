#include<bits/stdc++.h>
using namespace std;
struct twostack
{
    int *arr;
    int cap,top1,top2;
    twostack(int n)
    {
        cap=n;
        top1=-1;
        top2=n;
        arr=new int[n];
    }
    void push1(int x)
    {
        if(top1<top2-1)
        {
            top1++;
            arr[top1]=x;
        }
        else
        {
            cout<<"Stack 1 is overflowed\n";
            exit(1);
        }
    }
    void push2(int x)
    {
        if(top1<top2-1)
        {
            top2--;
            arr[top2]=x;
        }
        else
        {
            cout<<"Stack 2 is overflowed\n";
            exit(1);
        }
    }
    int pop1()
    {
        if(top1>=0)
        {
            int res=arr[top1];
            top1--;
            cout<<"\nDeleted element is "<<res;
        }
        else
        {
            cout<<"Stack 1 is underflow\n";
            exit(1);
        }
    }
    int pop2()
    {
        if(top2<cap)
        {
            int res=arr[top2];
            top2++;
            cout<<"\nDeleted element is "<<res;
        }
        else
        {
            cout<<"Stack 2 is underflow\n";
            exit(1);
        }
    }
    int peak1()
    {
        cout<<"\nPeak element of the stack is "<<arr[top1];
    }
    int peak2()
    {
        cout<<"\nPeak element of the stack is "<<arr[top2];
    }
    int size1()
    {
        cout<<"\nSize of the stack is "<<top1+1;
    }
    int size2()
    {
        cout<<"\nSize of the stack is "<<cap-top2;
    }
    bool isempty1()
    {
        if(top1==-1)
            cout<<"\nStack is empty ";
        else
            cout<<"\nStack is not empty ";
    }
    bool isempty2()
    {
        if(top2>=cap)
            cout<<"\nStack is empty ";
        else
            cout<<"\nStack is not empty ";
    }
};
int main()
{
    int n;
    int k;
    int value;
    char ch;
    cout<<"Enter the size of the stack ";
    cin>>n;
    twostack s(n);
    cout<<"Enter the values of the first stack\n";
    do
    {
        cout<<"\n";
        cin>>value;
        s.push1(value);
        cout<<"Do you wish to continue ";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
    cout<<"Enter the values of the second stack\n";
    do
    {
        cout<<"\n";
        cin>>value;
        s.push2(value);
        cout<<"Do you wish to continue";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    s.pop1();
    s.pop1();
    s.pop1();
    s.peak1();
    s.size1();
    s.isempty1();


    s.pop2();
    s.pop2();
    s.pop2();
    s.pop2();
    s.peak2();
    s.size2();
    s.isempty2();

    return 0;
}