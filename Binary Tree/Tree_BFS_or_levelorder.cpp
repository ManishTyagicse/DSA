#include"tree.h"
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
    BFStraversal(root);
    
    return 0;
}