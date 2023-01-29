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
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
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
void printkdistnodes(node *root, int k)
{
    if(root==NULL)
        return ;
    if(k==0)
        cout<<(root->data)<<" ";

    printkdistnodes(root->left,k-1);
    printkdistnodes(root->right,k-1);
}
void BFStraversal(node *root)
{
   if(root==NULL)
    return ;
    queue <node *> q;
    q.push(root);
    while(q.empty()==false)
    {
        node *curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}
int treesize(node *root)
{
    if(root==NULL)
        return 0;
    return 1+treesize(root->left)+treesize(root->right);
}
int treemax(node *root)
{
    const int INF=INT_MIN;
    if(root==NULL)
        return INF;
    return max((root->data),max(treemax(root->left),treemax(root->right)));
}
int treemin(node *root)
{
    const int INF=INT_MAX;
    if(root==NULL)
        return INF;
    return min((root->data),min(treemin(root->left),treemin(root->right)));
}
void leftviewtraversal(node *root)
{
    if(root==NULL)
        return ;
    queue <node *> q;
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            node *curr=q.front();
            q.pop();
            if(i==0)
                cout<<curr->data<<" ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        } 
    }
}
bool isbalanced(node *root)
{
    if(root==NULL)
        return true;
    int lh=treeheight(root->left);
    int rh=treeheight(root->right);

    return ((abs(lh-rh)<=1) && isbalanced(root->left) && isbalanced(root->right));
}
int preindex=0;
node *createtreefromtraversal(int ino[],int pre[],int is,int ie)
{
    if(is>ie)
        return NULL;
    node *root=new node(pre[preindex++]);
    int inindex;
    for(int i=is;i<=ie;i++)
    {
        if(ino[i]==root->data)
        {
            inindex=i;
            break;
        }
    }
    root->left=createtreefromtraversal(ino,pre,is,inindex-1);
    root->left=createtreefromtraversal(ino,pre,inindex+1,ie);
 
    return root;
}
int treemaxdiameter(node *root)
{
    if(root==NULL)
        return 0;
    int d1=1+treeheight(root->left)+treeheight(root->right);

    return max(d1,max(treemaxdiameter(root->left),treemaxdiameter(root->right)));
}
const int empty=-1;
void treeserialization(node *root,vector<int> &serialarray)
{
    if(root==NULL)
    {
        serialarray.push_back(empty);
        return;
    }
    serialarray.push_back(root->data);
    treeserialization(root->left,serialarray);
    treeserialization(root->right,serialarray);
}
int index=0;
node *treedeserialization(vector<int> &deserialarray)
{
    if(index==deserialarray.size())
        return NULL;
    
    int val=deserialarray[index];
    index++;
    if(val==empty)
        return NULL;
    node *root=new node(val);
    root->left=treedeserialization(deserialarray);
    root->right=treedeserialization(deserialarray);
}