#include"tree.h"
const int empty=-1;
void treeserialization(node *root,vector<int> &serialarray)
{
    if(root==NULL)
    {
        serialarray.push_back(empty);
        return;
    }
    serialarray.push_back(root->data);
    treeserialization(root->left,serialarray);
    treeserialization(root->right,serialarray);
}
int  main()
{
    vector<int> serialarray;
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

    cout<<"\nSerialization array of the tree is:=> ";
    treeserialization(root,serialarray);
    for(int i=0;i<serialarray.size();i++)
    {
        cout<<serialarray[i]<<" ";
    }
    
    return 0;
}