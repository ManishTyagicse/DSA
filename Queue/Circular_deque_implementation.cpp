#include<bits/stdc++.h>
using namespace std;

struct Cdeque
{
    int size,cap,front;
    int *arr;
    Cdeque(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
        front=0;
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
        front=(front+cap-1)%cap;
        arr[front]=x;
        size++;
    }
    void insertrear(int x)
    {
        if(isfull())
            return ;
        int rear=(front+size)%cap;
        arr[rear]=x;
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
        
        front=(front+1)/cap;
        size--;
    }
    int getfront()
    {
        if(isempty())
            return -1;
        return arr[front];
    }
    int getrear()
    {
        if(isempty())
            return -1;
        return arr[(front+size-1)%cap];
    }
};
int main()
{
    Cdeque dq(5);
    dq.insertfront(10);
    dq.insertfront(20);
    dq.insertrear(30);
    dq.insertrear(40);
    dq.insertrear(50);

    cout<<"\nFront item: "<<dq.getfront();
    dq.delfront();
    cout<<"\nFront item: "<<dq.getfront();

    cout<<"\nRear item: "<<dq.getrear();
    dq.delrear();
    cout<<"\nRear item: "<<dq.getrear();

    return 0;
}