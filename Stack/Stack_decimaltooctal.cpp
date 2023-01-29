#include"mystack.h"
void decimal_to_octal(int n)
{
    mystack s(n);
    cout<<"\nNumber in octal format is: ";
    while(n>0)
    {
        int rem=n%8;
        s.push(rem);
        n=n/8;
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
    decimal_to_octal(numb);

    return 0;
}