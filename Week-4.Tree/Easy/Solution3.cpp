
class Solution {
public:
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot,bool direct=false) {
       if(root==NULL and subRoot==NULL) return true;
       if(root==NULL or subRoot==NULL) return false;
        bool ans=false;
       if(root->val==subRoot->val){
           ans=(isSubtree(root->left,subRoot->left,true) and isSubtree(root->right,subRoot->right,true));
       }
        
        return ans or (!direct and isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot));
    }
};