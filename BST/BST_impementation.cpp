#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node *createBST(node *root,int x)
{
    if (root == NULL)
        return new node(x);

    if (x < root->data) 
    {
        root->left=createBST(root->left, x);
    }
 
    else if (x > root->data)
        root->right = createBST(root->right, x);

    return root;
}
/*node *deletenode(node *root,int x)
{
    if(root==NULL)
        return NULL;
    if(root->data>x)
        root->left=deletenode(root->left,x);
    else
    if(root->data>x)
        root->right=deletenode(root->right,x);
    else
    {
        if(root->left==NULL)
        {
            node *temp=root->right;
            delete root;
            return temp;
        }
        else
        if(root->right==NULL)
        {
            node *temp=root->left;
            delete root;
            return temp;
        }
        else
        {
            node *succ=getsuccessor(root);
            root->data=succ->data;
            root->right=deletenode(root->right,succ->data);
        }
    }
}
*/
bool search(node *root,int x)
{
    while(root!=NULL)
    {
        if(root->data==x)
            return true;
        else
        if(root->data<x)
            root=root->right;
        else
            root=root->left;
    }
    return false;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
    }
}
node *floor(node *root,int x)
{
    node *res=NULL;
    while(root!=NULL)
    {
        if(root->data==x)
            return root;
        else 
        if(root->data>x)
            root=root->left;
        else
        {
            res=root;
            root=root->right;
        }
    }
    return res;
}
node *ceil(node *root,int x)
{
    node *res=NULL;
    while(root!=NULL)
    {
        if(root->data==x)
            return root;
        else 
        if(root->data<x)
            root=root->right;
        else
        {
            res=root;
            root=root->left;
        }
    }
    return res;
}
int prevv=INT_MIN;
bool isBST(node *root)
{
    if(root==NULL)
        return true;
    if(isBST(root->left)==false)
        return false;
    if(root->data<=prevv);
        return false;
    prevv=root->data;
    return isBST(root->right);
}
node *min(node *root)
{
    while(root->left!=NULL)
        root=root->left;
    return root;
}
node *max(node *root)
{
    while(root->right!=NULL)
        root=root->right;
    return root;
}
int main()
{
    node *root=NULL;
    root=createBST(root,50);
    root=createBST(root,40);
    root=createBST(root,30);
    root=createBST(root,20);
    root=createBST(root,10);
    root=createBST(root,15);
    root=createBST(root,25);
    root=createBST(root,60);
    root=createBST(root,70);
    root=createBST(root,80);
    root=createBST(root,90);
    root=createBST(root,100);
    root=createBST(root,85);
    root=createBST(root,75);

    cout<<"\nThe binary search tree is: ";
    inorder(root);

    cout<<"\nIs tree BST or not: "<<isBST(root);

    return 0;
}