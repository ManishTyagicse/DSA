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
    temp->next=head;
    if(head!=NULL)
        head->prev=temp;
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
    temp->prev=curr;
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
    for(int i=0;i<=index-1 && curr!=NULL;i++)
        curr=curr->next;
    if(curr==NULL)
        return head;
    temp->next=curr->next;
    curr->next=temp;
    temp->prev=curr;
    return head;
}
node *delbeg(node *head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
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
    while(curr->next!=NULL)
        curr=curr->next;
    curr->prev->next=NULL;
    delete curr;
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
        
	node* temp=NULL;
	node* curr=head;
	while(curr!=NULL) 
    {
		temp = curr->prev;
		curr->prev = curr->next;
		curr->next = temp;
		curr = curr->prev;
	}
	return temp->prev;
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
        cout<<(curr->data)<<"<->";
        curr=curr->next;
    }
}