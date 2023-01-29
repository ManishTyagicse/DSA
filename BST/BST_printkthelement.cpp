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
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
    }
}
void printkth(node *root,int &count,int k)
{
    if(root!=NULL)
    {
        printkth(root->left,count,k);
        count++;
        if(count==k)
        {
            cout<<(root->left)<<" ";
            return ;
        }
        printkth(root->right,count,k);
    }
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

    int count=0,k;
    cout<<"\nEnter the k th element: ";
    cin>>k;
    printkth(root,count,k);

    return 0;
}