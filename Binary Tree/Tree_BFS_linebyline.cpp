#include"tree.h"
void BFSlinebyline(node *root)
{
   if(root==NULL)
    return ;
    queue <node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        node *curr=q.front();
        q.pop();
        if(curr==NULL)
        {
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<curr->data<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}
int  main()
{
    node *root=NULL;
    int x,k;
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

    cout<<"\nLevel order or BFS traversal is:=> ";
    BFSlinebyline(root);
    
    return 0;
}