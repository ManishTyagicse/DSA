#include"mystack.h"
char DAT[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void decimal_to_hexa(int n)
{
    mystack s(n);
    cout<<"\nNumber in hexa format is: ";
    while(n>0)
    {
        int rem=n%16;
        s.push(rem);
        n=n/16;
    }
    while(!s.isempty())
    {
        cout<<DAT[s.pop()];
    }
}
int main()
{
    int numb;
    cout<<"Enter the number in decimal: ";
    cin>>numb;
    decimal_to_hexa(numb);

    return 0;
}