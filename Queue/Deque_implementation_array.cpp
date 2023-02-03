#include<bits/stdc++.h>
using namespace std;

struct Deque
{
    int size,cap;
    int *arr;
    Deque(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
    }
    bool isfull()
    {
        if(size==cap)
            return 1;
        else 
            return 0;
    }
    bool isempty()
    {
        if(size==0)
            return 1;
        else 
            return 0;
    }
    void insertfront(int x)
    {
        if(isfull())
            return ;
        for(int i=size-1;i>=0;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=x;
        size++;
    }
    void insertrear(int x)
    {
        if(isfull())
            return ;
        arr[size]=x;
        size++;
    }
    void delrear()
    {
        if(isempty())
            return ;
        size--;
    }
    void delfront()
    {
        if(isempty())
            return ;
        for(int i=0;i<size-1;i++)
            arr[i]=arr[i+1];
        size--;
    }
    int getfront()
    {
        if(isempty())
            return -1;
        return arr[0];
    }
    int getrear()
    {
        if(isempty())
            return -1;
        return arr[size-1];
    }
};
int main()
{
    Deque dq(20);
    dq.insertfront(10);
    dq.insertfront(20);
    dq.insertfront(30);
    dq.insertfront(40);
    dq.insertrear(50);
    dq.insertrear(60);
    dq.insertrear(70);
    dq.insertrear(80);

    cout<<"\nFront item: "<<dq.getfront();
    dq.delfront();
    cout<<"\nFront item: "<<dq.getfront();

    cout<<"\nRear item: "<<dq.getrear();
    dq.delrear();
    cout<<"\nRear item: "<<dq.getrear();

    return 0;
}