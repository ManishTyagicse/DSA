#include"linkedlist.h"
void nthnodefromlast(node *head,int n)
{
    if(head==NULL)
        return ;
    node *slow=head,*fast=head;
    for(int i=0;i<n;i++)
    {
        fast=fast->next;
    }
    while(fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    cout<<"\nThe "<<n<<" node from the last is: "<<(slow->data);
}    
int main()
{
    node *head=NULL;
    head=insertbeg(head,10);
    head=insertend(head,20);
    head=insertend(head,30);
    head=insertend(head,40);
    head=insertend(head,60);
    head=insertend(head,70);
    head=insertend(head,80);
    head=insertend(head,90);
    head=insertend(head,100);
    head=insertend(head,110);
    head=insertend(head,130);
    head=insertend(head,140);
    head=insertend(head,150);
    head=insertend(head,160);

    cout<<"\nThe original linked list is: ";
    traversal(head);

    int n;
    cout<<"\nEnter the node number from last";
    cin>>n;
    nthnodefromlast(head,n);
 
    return 0;

}