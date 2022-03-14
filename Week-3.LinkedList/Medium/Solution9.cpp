/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 // Solution 1
class Solution {
public:
    void preorder(vector<int> &store,TreeNode *root){
        if(!root) return;
        store.push_back(root->val);
        preorder(store,root->left);
        preorder(store,root->right);
    }
    void flatten(TreeNode* root) {
        if(!root) return;
        vector<int> store;
        preorder(store,root);
        
        for(int i=1;i<store.size();i++){
                root->left=NULL;
                root->right=new TreeNode(store[i]);
                root=root->right;
        }
    }
};

// Solution 2
