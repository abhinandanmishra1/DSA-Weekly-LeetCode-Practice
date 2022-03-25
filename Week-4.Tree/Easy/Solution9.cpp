
class Solution {
public:
    void findans(TreeNode *root,vector<string>&ans,string s){
        if(!root){
            return;
        }
        s.append(to_string(root->val));
        s.append("->");
        findans(root->left,ans,s);
        findans(root->right,ans,s);
        if(!root->right and !root->left){
            if(s.back()=='>') s.pop_back();
            if(s.back()=='-') s.pop_back();
            ans.push_back(s);
        }        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        findans(root,ans,"");
        return ans;
    }
};