#include"mystackchar.h"
char DAT[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void decimal_to_hexa(int n,int base)
{
    mystack s(n);
    cout<<"\nNumber in format is: ";
    while(n>0)
    {
        int rem=n%base;
        s.push(rem);
        n=n/base;
    }
    while(!s.isempty())
    {
        cout<<DAT[s.pop()];
    }
}
int main()
{
    int numb,base=2;
    cout<<"Enter the number in decimal: ";
    cin>>numb;
    cout<<"\nEnter the base: ";
    cin>>base;
    decimal_to_hexa(numb,base);

    return 0;
}