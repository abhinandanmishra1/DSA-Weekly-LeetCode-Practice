class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high,int ans=0) {
        if(root==NULL) return 0;
        if(root->val>=low and root->val<=high){
            ans=root->val+rangeSumBST(root->left,low,high,ans)+rangeSumBST(root->right,low,high,ans);
        }else if(root->val<low){
            ans+=rangeSumBST(root->right,low,high,ans);
        }else if(root->val>high){
            ans+=rangeSumBST(root->left,low,high,ans);
        }
        return ans;
    }
};