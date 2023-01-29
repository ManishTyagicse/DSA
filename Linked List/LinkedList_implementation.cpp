#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node *next;
  node(int x)
  {
    data=x;
    next=NULL;
  } 
};
node *insertbeg(node *head,int x)
{
    node *temp=new node(x);
    temp->next=head;
    return temp;
}
node *insertend(node *head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
        return temp;
    node *curr=head;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->next=temp;
    return head;
}
node *insertatindex(node *head,int index,int x)
{
    node *temp=new node(x);
    if(index==0)
    {
        temp->next=head;
        return temp;
    }
    node *curr=head;
    for(int i=0;i<index-1 && curr!=NULL;i++)
        curr=curr->next;
    if(curr==NULL)
        return head;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
node *delbeg(node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        node *temp=head->next;
        delete head;
        return temp;
    }
}
node *deltail(node *head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    node *curr=head;
    while(curr->next->next!=NULL)
        curr=curr->next;
    delete (curr->next);
    curr->next=NULL;
    return head;
}
node *delatindex(node *head,int index)
{
    if(head==NULL)
        return NULL;
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    node *curr=head;
    for(int i=0;i<index-1;i++)
        curr=curr->next;
    node *temp=curr->next;
    curr->next=temp->next;
    delete temp;
    return head;
}
node *reversedll(node *head)
{
    if(head==NULL)
        return NULL;
    node *curr=head;
    node *prev=NULL;
    while(curr!=NULL)
    {
        node *p=curr->next;
        curr->next=prev;
        prev=curr;
        curr=p;
    }
    return prev;
}
int search(node *head,int key)
{
    int index=0;
    node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==key)
            return index;
        else
        {
            index++;
            curr=curr->next;
        }
    }
    return -1;
}
void traversal(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<"->";
        curr=curr->next;
    }
}
int main()
{
    node *head=new node(10);
    head=insertend(head,20);
    head=insertend(head,30);
    head=insertend(head,40);
    head=insertend(head,50);
    head=insertend(head,60);
    head=insertend(head,70);
    head=insertend(head,80);
    cout<<"\nThe linked list is: ";
    traversal(head);
     
    cout<<"\nElement is present at index: "<<search(head,40);
    
    head=delbeg(head);
    cout<<"\nThe linked list is: ";
    traversal(head);
    
    insertatindex(head,3,45);
    cout<<"\nThe linked list is: ";
    traversal(head);

    head=deltail(head);
    cout<<"\nThe linked list is: ";
    traversal(head);

    head=delatindex(head,3);
    cout<<"\nThe linked list is: ";
    traversal(head);

    head=reversedll(head);
    cout<<"\nThe linked list is: ";
    traversal(head);

    return 0;
}