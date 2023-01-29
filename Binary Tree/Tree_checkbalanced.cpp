#include"tree.h"
bool isbalanced(node *root)
{
    if(root==NULL)
        return true;
    int lh=treeheight(root->left);
    int rh=treeheight(root->right);

    return ((abs(lh-rh)<=1) && isbalanced(root->left) && isbalanced(root->right));
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

    cout<<"\nIs the tree balanced:=> "<<isbalanced(root);
    
    return 0;
}