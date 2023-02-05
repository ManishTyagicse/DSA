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
void treetopview(node *root)
{
    map<int,int> mp;
    queue <pair<node *,int>> q;
    q.push({root,0});
    while(q.empty()==false)
    {
        auto p=q.front();
        node *curr=p.first;
        int hd=p.second;
        if(mp.find(hd)==mp.end())
            mp[hd]=(curr->data);
        q.pop();
        if(curr->left!=NULL)
            q.push({curr->left,hd-1});
        if(curr->right!=NULL)
            q.push({curr->right,hd+1});
    }
    cout<<"\nTop view is: ";
    for(auto p:mp)
    {
        cout<<p.second<<" ";
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
    cout<<endl;

    treetopview(root);
    return 0;
}