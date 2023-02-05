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
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
    }
}
void verticalsum(node *root,int hd,map<int,int> &mp)
{
    if(root==NULL)
        return ;
    verticalsum(root->left,hd-1,mp);
    mp[hd]=mp[hd]+(root->data);
    verticalsum(root->right,hd+1,mp);
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
    cout<<endl;

    map<int,int> mp;
    verticalsum(root,0,mp);
    
    for(auto sum:mp)
        cout<<"\nThe vertical sum: "<<(sum.second)<<" ";

    return 0;
}