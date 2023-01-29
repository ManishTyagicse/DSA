#include"linkedlist.h"
void middlenode(node *head)
{
    if(head==NULL)
        return ;
    if(head->next==NULL)
    {
        cout<<"\nMiddle node of the linked list is: "<<(head->data);
    }
    node *slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"\nMiddle node of the linked list is: "<<(slow->data);
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

    middlenode(head);
 
    return 0;

}