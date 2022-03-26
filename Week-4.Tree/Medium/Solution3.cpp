class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        queue<TreeNode *> q;
        
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            
            while(n--){
                TreeNode *temp=q.front();
                q.pop();
                if(n==0){
                    ans.push_back(temp->val);
                }
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
    }
};