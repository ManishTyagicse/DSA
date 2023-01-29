#include"tree.h"
int preindex=0;
node *createtreefromtraversal(int ino[],int pre[],int is,int ie)
{
    if(is>ie)
        return NULL;
    node *root=new node(pre[preindex++]);
    int inindex;
    for(int i=is;i<=ie;i++)
    {
        if(ino[i]==root->data)
        {
            inindex=i;
            break;
        }
    }
    root->left=createtreefromtraversal(ino,pre,is,inindex-1);
    root->left=createtreefromtraversal(ino,pre,inindex+1,ie);
 
    return root;
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
    
    return 0;
}