#include"linkedlist.h"
node *sortedinsert(node *head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
    {
        return temp;
    }
    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }
    node *curr=head;
    while(curr!=NULL && curr->next->data<x)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
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
    head=insertend(head,100);
    head=insertend(head,110);
    head=insertend(head,130);
    head=insertend(head,140);
    head=insertend(head,150);
    head=insertend(head,160);

    cout<<"\nThe original linked list is: ";
    traversal(head);

    head=insertatindex(head,4,50);
    cout<<"\nThe modified linked list is: ";
    traversal(head);

    head=sortedinsert(head,120);
    cout<<"\nThe modified linked list is: ";
    traversal(head);

    head=sortedinsert(head,90);
    cout<<"\nThe modified linked list is: ";
    traversal(head);
 
    return 0;

}