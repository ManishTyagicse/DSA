#include"tree.h"
int treesize(node *root)
{
    if(root==NULL)
        return 0;
    return 1+treesize(root->left)+treesize(root->right);
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

    cout<<"\nSize of the tree is:=> "<<treesize(root);
    
    
    return 0;
}