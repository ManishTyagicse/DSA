#include"tree.h"
int treemax(node *root)
{
    const int INF=INT_MIN;
    if(root==NULL)
        return INF;
    return max((root->data),max(treemax(root->left),treemax(root->right)));
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

    cout<<"\nMax of the tree is:=> "<<treemax(root);
    
    
    return 0;
}