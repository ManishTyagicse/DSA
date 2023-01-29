#include"linkedlist.h"
node *reverseingroups(node *head,int k)
{
    node *curr=head,*next=NULL,*prev=NULL;
    int count=0;
    while(curr!=NULL&&count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL)
    {
        node *head2=reverseingroups(next,k);
        head->next=head2;
    }
    return prev;
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

    cout<<"\nEnter the size of each group: ";
    int k;
    cin>>k;
    head=reverseingroups(head,k);
    cout<<"\nThe reversed linked list in groups is: ";
    traversal(head);
 
    return 0;

}