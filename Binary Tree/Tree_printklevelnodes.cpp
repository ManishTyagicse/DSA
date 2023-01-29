#include"tree.h"
void printkdistnodes(node *root, int k)
{
    if(root==NULL)
        return ;
    if(k==0)
        cout<<(root->data)<<" ";

    printkdistnodes(root->left,k-1);
    printkdistnodes(root->right,k-1);
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

    cout<<"\nEnter the level of the tree: ";
    cin>>k;
    cout<<"\nRoots of the "<<k<<" level are: ";
    printkdistnodes(root,k);
    
    return 0;
}