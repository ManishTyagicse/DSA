#include"tree.h"
int treemaxwidth(node *root)
{
    if(root==NULL)
        return 0;
    queue <node *> q;
    q.push(root);
    int res=0;
    while(q.empty()==false)
    {
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count;i++)
        { 
            node *curr=q.front();
            q.pop();
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        } 
    }
    return res;
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

    cout<<"\nMaximum width of the tree is:=> "<<treemaxwidth(root);
    
    return 0;
}