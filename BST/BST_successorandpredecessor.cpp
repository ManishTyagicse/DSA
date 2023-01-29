#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node *father;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
        father=NULL;
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
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
    }
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
    node *p=root;
    while(p->left!=NULL)
        p=p->left;
    return p;
}
node *max(node *root)
{
    node *p=root;
    while(p->right!=NULL)
        p=p->right;
    return  p;
}
node *BSTSuccessor(node *root)
{
    struct node *p,*q;
    q=NULL;
    p=root;
    if(p->right!=NULL)
        {
            q=min(p->right);
            return q;
        }
    else
    {
        q=p->father;
        while ((q!=NULL) && (q->right==p))
        {
            p=q;
            q=q->father;
        }
    }
    return q;
}
node *BSTPredecessor(node *root)
{
    struct node *p,*q;
    q=NULL;
    p=root;
    if(p->left!=NULL)
        {
            q=max(p->right);
            return q;
        }
    else
    {
        q=p->father;
        while ((q!=NULL) && (q->left==p))
        {
            p=q;
            q=q->father;
        }
    }
    return q;
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
    root=createBST(root,85);
    root=createBST(root,75);

    cout<<"\nThe binary search tree is: ";
    inorder(root);

    cout<<"\nIs tree BST or not: "<<isBST(root);

    node *y;
    y=BSTSuccessor(root);
    printf("\n%d\n",y->data);
    y=BSTSuccessor(root);
    printf("%d\n",y->data);
    //printf("%d",q->data);
    y=BSTPredecessor(root);
    printf("%d\n",y->data);

    return 0;
}