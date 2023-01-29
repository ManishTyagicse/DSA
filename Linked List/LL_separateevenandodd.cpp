#include"linkedlist.h"
node *separateevenodd(node *head)
{
    node *ee=NULL,*es=NULL,*os=NULL,*oe=NULL;
    node *curr=head;
    for(;curr!=NULL;curr=curr->next)
    {
        int x=curr->data;
        if(x%2==0)      
        {
            if(es==NULL)
                es=ee=curr;
            else
            {
                ee->next=curr;
                ee=ee->next;
            }
        }
        else
        {
            if(os==NULL)
                os=oe=curr;
            else
            {
                oe->next=curr;
                oe=oe->next;
            }
        }
    }
    if(os==NULL || es==NULL)
        return head;
    ee->next=os;
    oe->next=NULL;
    return es;
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

    head=separateevenodd(head);
    cout<<"\nThe linked list after separation are: ";
    traversal(head);

    return 0;
}