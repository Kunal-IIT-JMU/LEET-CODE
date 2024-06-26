class Solution {
public:
    int sum =0;
    void preorder(TreeNode* root , int low , int high){
        if(root == NULL){
            return ;
        }
        if(root -> val >= low && root -> val <= high){
            sum = sum + root -> val;
        }
        preorder(root -> left , low , high);
        preorder(root -> right , low , high);
    }
    int rangeSumBST(TreeNode* root , int low, int high){
        preorder(root, low, high);  //preorder traversal
        return sum;
    }
};
