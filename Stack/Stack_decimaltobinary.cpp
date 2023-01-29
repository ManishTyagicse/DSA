#include"mystack.h"
void decimal_to_binary(int n)
{
    mystack s(n);
    cout<<"\nNumber in binary format is: ";
    while(n>0)
    {
        int rem=n%2;
        s.push(rem);
        n=n/2;
    }
    while(!s.isempty())
    {
        cout<<s.pop();
    }
}
int main()
{
    int numb;
    cout<<"Enter the number in decimal: ";
    cin>>numb;
    decimal_to_binary(numb);

    return 0;
}