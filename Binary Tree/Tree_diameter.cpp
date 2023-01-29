#include"tree.h"
int treemaxdiameter(node *root)
{
    if(root==NULL)
        return 0;
    int d1=1+treeheight(root->left)+treeheight(root->right);

    return max(d1,max(treemaxdiameter(root->left),treemaxdiameter(root->right)));
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

    cout<<"\nMaximum diameter of the tree is:=> "<<treemaxdiameter(root);
    
    return 0;
}