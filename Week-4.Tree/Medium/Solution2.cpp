// Approach - 1

class Solution {
public:
    bool find(TreeNode *root,TreeNode *node){
        if(root==NULL) return false;
        
        if(root==node) return true;
        return find(root->left,node) or find(root->right,node);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return root;
        
        if(root==p or root==q) return root;
        
        bool rp=find(root->right,p);
        bool lp=find(root->left,p);
        bool rq=find(root->right,q);
        bool lq=find(root->left,q);
        
        if(rp and rq){
            return lowestCommonAncestor(root->right,p,q);
        }
        if(lp and lq){
            return lowestCommonAncestor(root->left,p,q);
        }
        return root;
    }
};

// Approach 2

class Solution {
public:
    bool is(TreeNode *root,TreeNode *p,TreeNode *q){
        return root==p or root==q;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root or root==p or root==q) return root;
        TreeNode *rootL=lowestCommonAncestor(root->left,p,q);
        TreeNode * rootR=lowestCommonAncestor(root->right,p,q);
        if(rootL==NULL){
            return rootR;
        }
        if(rootR==NULL){
            return rootL;
        }
        return root;
    }
};