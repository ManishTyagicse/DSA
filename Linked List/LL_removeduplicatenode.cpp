#include"linkedlist.h"
node *removeduplicatenode(node *head)
{
    node *curr=head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            node *temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else
            curr=curr->next;
    }
    return head;
}    
int main()
{
    node *head=NULL;
    head=insertbeg(head,10);
    head=insertend(head,20);
    head=insertend(head,30);
    head=insertend(head,30);
    head=insertend(head,40);
    head=insertend(head,50);
    head=insertend(head,60);
    head=insertend(head,60);
    head=insertend(head,70);
    head=insertend(head,80);
    head=insertend(head,90);
    head=insertend(head,90);
    head=insertend(head,100);
    head=insertend(head,100);

    cout<<"\nThe original linked list is: ";
    traversal(head);

    head=removeduplicatenode(head);
    cout<<"\nThe linked list after the modifications is: ";
    traversal(head);
 
    return 0;

}