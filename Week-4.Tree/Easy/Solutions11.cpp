class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root or root==p or root==q) return root;
        TreeNode *leftAns=lowestCommonAncestor(root->left,p,q);
        TreeNode *rightAns=lowestCommonAncestor(root->right,p,q);
        if(!leftAns) return rightAns;
        if(!rightAns) return leftAns;
        return root;
    }
};