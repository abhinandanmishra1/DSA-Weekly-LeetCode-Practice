class Solution {
public:
    bool isValidBST(TreeNode* root,long long int ma=LLONG_MIN,long long int mi=LLONG_MAX) {
        if(!root) return true;
        if(root->val<=ma or root->val>=mi) return false;
        return isValidBST(root->left,ma,root->val) and isValidBST(root->right,root->val,mi);
    }
};