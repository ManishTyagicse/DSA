#include"mystack.h"
int main()
{
    int n,y,z,x,p;
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


    while(!s.isempty())
    {
         y=s.pop();
         p=s.peak();
         //printf("%d",y);
        while(!(s.isempty()) && (y<p))
        {
            z=s.pop();
            s.push(z);
        }
        s.push(y);
    }
    while(!s.isempty())
    {
        x=s.pop();
        cout<<x;
    }

    return 0;
}