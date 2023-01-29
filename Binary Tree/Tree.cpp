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
void createtree(node *root)
{
    int choice;
    struct node *p;
    int x;
    cout<<"\nWhether the left node of "<<(root->data)<<" exist or not: ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"\nInput the data of left node of "<<(root->data)<<": ";
        cin>>x;
        p=new node(x);
        root->left=p;
        createtree(p);
    }
 
    cout<<"\nWhether the right node of "<<(root->data)<<" exist or not: ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"\nInput the data of right node of "<<(root->data)<<": ";
        cin>>x;
        p=new node(x);
        root->right=p;
        createtree(p);
    }
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        cout<<(root->data)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        cout<<(root->data)<<" ";
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        preorder(root->right);
        cout<<(root->data)<<" ";
    }
}
int treeheight(node *root)
{
    if(root==NULL)
        return 0;
    return max(treeheight(root->left),treeheight(root->right))+1;
}
int  main()
{
    node *root=NULL;
    int x;
    cout<<"\nEnter the information of the node\n";
    cin>>x;

    root=new node(x);
    createtree(root);

    cout<<"\n Preordertraversal is:=> ";
    preorder(root);
    cout<<"\n Inordertraversal is:=> ";
    inorder(root);
    cout<<"\n Postordertraversal is:=> ";
    postorder(root);
 
    int height=treeheight(root);
    cout<<"\nHeight of the tree is: "<<height;
    
    return 0;
}