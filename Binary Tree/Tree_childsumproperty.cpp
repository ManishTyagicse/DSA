#include"tree.h"
bool ischildsum(node *root)
{
    if(root==NULL)
        return true;
    if(root->left==NULL && root->right==NULL)
        return true;
    int sum=0;
    if(root->left!=NULL)
        sum=sum+root->left->data;
    if(root->right!=NULL)
        sum=sum+root->right->data;
    return (root->data==sum && ischildsum(root->left) && ischildsum(root->right));
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

    cout<<"\nDoes the tree follows the child sum property:=> "<<ischildsum(root);
    
    return 0;
}