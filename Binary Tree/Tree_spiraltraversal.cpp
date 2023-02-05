#include"tree.h"
void spiraltraversal(node *root)
{
    if(root==NULL)
    return ;
    
    stack<node *> s1;
    stack<node *> s2;
    s1.push(root);
        
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            node *curr=s1.top();
            s1.pop();
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
                s2.push(curr->left);
            if(curr->right!=NULL)
                s2.push(curr->right);
        }
        while(!s2.empty())
        {
            node *curr=s2.top();
            s2.pop();
            cout<<curr->data<<" ";
            if(curr->right!=NULL)
                s1.push(curr->right);
            if(curr->left!=NULL)
                s1.push(curr->left);
        }
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

    cout<<"\nSpiral traversal is:=> ";
    spiraltraversal(root);
    
    return 0;
}