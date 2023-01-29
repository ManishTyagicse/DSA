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
        
    node *temp=NULL;
    node *curr=head;
    node *p;
    do
    {
        p=curr->next;
        curr->next=temp;
        temp=curr;
        curr=p;
    }while(curr!=head);
    head->next=temp;
    return temp;
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
int main()
{
    node *head=NULL;
    head=insertbeg(head,10);
    head=insertend(head,20);
    head=insertend(head,30);
    head=insertend(head,40);
    head=insertend(head,50);
    head=insertend(head,60);
    head=insertend(head,70);
    head=insertend(head,80);
    head=insertatindex(head,4,45);
    cout<<"\nThe linked list is: ";
    traversal(head);

    head=delbeg(head);
    cout<<"\nThe linked list is: ";
    traversal(head);

    head=deltail(head);
    cout<<"\nThe linked list is: ";
    traversal(head);

    head=delatindex(head,3);
    cout<<"\nThe linked list is: ";
    traversal(head);

    cout<<"\nElement found at index: "<<search(head,40);

    head=reversedll(head);
    cout<<"\nThe reversed linked list is: ";
    traversal(head);
    
    return 0;
}