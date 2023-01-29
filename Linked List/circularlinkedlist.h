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
    if(head==NULL)
        temp->next=temp;
    else{
        node *curr=head;
        while(curr->next!=head)
            curr=curr->next;
        curr->next=temp;
        temp->next=head;
    }
    return temp;
}
node *insertend(node *head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
    {
        temp->next=head;
        return temp;
    }
    else
    {
        node *curr=head;
        while(curr->next!=head)
            curr=curr->next;
        curr->next=temp;
        temp->next=head;
        return head;
    }
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
    for(int i=0;i<index-1;i++)
        curr=curr->next;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
node *delbeg(node *head)
{
    if(head==NULL)
        return NULL;
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    node *curr=head;
    while(curr->next!=head)
        curr=curr->next;
    curr->next=head->next;
    delete head;
    return (curr->next);
}
node *deltail(node *head)
{
    if(head==NULL)
        return NULL;
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    node *curr=head;
    while(curr->next->next!=head)
        curr=curr->next;
    delete (curr->next);
    curr->next=head;
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
    curr->next=curr->next->next;
    delete temp;
    return head;
}
node *reversedll(node *head)              
{
    if(head==NULL)
        return NULL;
        
    node *prev=NULL;
    node *curr=head;
    node *p;
    do
    {
        p=curr->next;
        curr->next=prev;
        prev=curr;
        curr=p;
    }while(curr!=head);
    head->next=prev;
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
    if(head==NULL)return;
    node *p=head;
    do{
        cout<<p->data<<"->";
        p=p->next;
    }while(p!=head);
}