#include"linkedlist.h"
bool detectandremoveloop(node *head)
{
    node *slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            break;
    }
    if(slow!=fast)
        return;
    slow=head;
    while(slow->next != fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
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

    int ans;
    ans=detectandremoveloop(head);
    cout<<"\nwhether lopp is present in the linked list: "<<ans;
    
 
    return 0;

}