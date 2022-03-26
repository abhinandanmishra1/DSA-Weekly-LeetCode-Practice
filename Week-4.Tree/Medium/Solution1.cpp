class Solution {
public:
    int goodNodes(TreeNode* root,int ma=INT_MIN) {
        if(!root) return 0;
        int ans=(root->val>=ma);
        ans+=goodNodes(root->left,max(ma,root->val));
        ans+=goodNodes(root->right,max(root->val,ma));
        return ans;
    }
};