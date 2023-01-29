#include"tree.h"
int treemin(node *root)
{
    const int INF=INT_MAX;
    if(root==NULL)
        return INF;
    return min((root->data),min(treemin(root->left),treemin(root->right)));
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

    cout<<"\nMin of the tree is:=> "<<treemin(root);
    
    
    return 0;
}