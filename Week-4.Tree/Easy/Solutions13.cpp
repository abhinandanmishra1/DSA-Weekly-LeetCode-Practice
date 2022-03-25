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
class Solution {
public:
    vector<int> store;
    void getAns(TreeNode *root){
        if(root==NULL) return; 
        getAns(root->left);
        store.push_back(root->val);
        getAns(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        getAns(root);
        int ans=INT_MAX;
        for(int i=0;i<store.size()-1;i++){
            ans=min(ans,abs(store[i]-store[i+1]));
        }
        return ans;
    }
};