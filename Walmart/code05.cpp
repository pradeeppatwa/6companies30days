// Transform to Sum Tree

class Solution {
  public:
   
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *root)
    {
        // Your code here
        if(!root)
           return;
       
       int lb=0;
       int la=0;
       if(root->left)
       {
           lb=root->left->data;
           toSumTree(root->left);
           la=root->left->data;
       }
       
       int rb=0;
       int ra=0;
       if(root->right)
       {
           rb=root->right->data;
           toSumTree(root->right);
           ra=root->right->data;
       }
       
       root->data= rb + ra + la + lb;
       return;
    }
};
