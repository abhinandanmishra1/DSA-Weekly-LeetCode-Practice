
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root,bool f=false) {
       if(root==NULL) return 0;
        int ans=0;
       if(f and root->left==NULL and root->right==NULL){
           ans+=root->val;
       }
       ans+=sumOfLeftLeaves(root->left,true);
       ans+=sumOfLeftLeaves(root->right,false);
        return ans;
    }
};