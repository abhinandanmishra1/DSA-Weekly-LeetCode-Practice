class Solution {
public:
    int ans=INT_MIN;
    int findans(TreeNode * root){
        if(!root){
            return 0;
        }
        int lefth=findans(root->left);
        int righth=findans(root->right);
        ans=max(ans,lefth+righth);
        return max(lefth,righth)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int x=findans(root);
        return ans;
    }
};