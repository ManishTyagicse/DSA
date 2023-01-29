#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node *prev;
  node *next;
  node(int x)
  {
    data=x;
    prev=NULL;
    next=NULL;
  } 
};
node *insertbeg(node *head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    else
    {
        temp->prev=head->prev;
        temp->next=head;
        head->prev->next=temp;
        head->prev=temp;
        return temp;
    }
    
}
node *insertend(node *head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }    
    node *curr=head;
    while(curr->next!=head)
        curr=curr->next;
    temp->next=head;
    head->prev=temp;
    temp->prev=curr;
    curr->next=temp;
    return head;
}
node *insertatindex(node *head,int index,int x)
{
    node *temp=new node(x);
    if(index==0)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    node *curr=head;
    for(int i=0;i<=index-1;i++)
        curr=curr->next;
    node *currnext=curr->next;
    curr->next=temp;
    temp->prev=curr;
    temp->next=currnext;
    currnext->prev=temp;
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
    else
    {
        node *curr=head;
        head->prev->next=curr->next;
        curr->next->prev=head->next;
        curr=curr->next;
        delete head;
        return curr;
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
    while(curr->next->next!=head)
        curr=curr->next;
    node *temp=curr->next;
    head->prev=curr;
    curr->next=head;
    delete temp;
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
    temp->next->prev=temp->prev;
    delete temp;
    return head;
}
node *reversedll(node *head)              
{
    if(head==NULL)
        return NULL;
        
	node *temp=head->prev;
	node *curr=head;
    node *p;
	do 
    {
		p=curr->next;
        curr->next=temp;
        curr->prev=p;
        temp=curr;
        curr=p;
	}while(curr!=head);
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