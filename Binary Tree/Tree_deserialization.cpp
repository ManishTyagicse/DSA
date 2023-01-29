#include"tree.h"
const int empty=-1;
int index=0;
node *treedeserialization(vector<int> &deserialarray)
{
    if(index==deserialarray.size())
        return NULL;
    
    int val=deserialarray[index];
    index++;
    if(val==empty)
        return NULL;
    node *root=new node(val);
    root->left=treedeserialization(deserialarray);
    root->right=treedeserialization(deserialarray);
}
int  main()
{
    //10 20 30 -1 -1 40 -1 -1 60 70 -1 -1 80 -1 -1
    vector<int> deserialarray={10,20,30,-1,-1,40,-1,-1,60,70,-1,-1,80,-1,-1};
    /*cout<<"\nEnter the elements of the deserialized array: ";
    for(int i=0;i<deserialarray.size();i++)
    {
        cin>>deserialarray[i];
    }
    */

    node *root=treedeserialization(deserialarray);
    

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