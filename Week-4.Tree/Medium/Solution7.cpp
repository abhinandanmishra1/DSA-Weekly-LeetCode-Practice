
class BSTIterator {
public:
    vector<int> store;
    int index;
    void inorder(TreeNode *root){
        if(!root) return;
        inorder(root->left);
        store.push_back(root->val);
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
        index=0;
    }
    
    int next() {
        return store[index++];
    }
    
    bool hasNext() {
        return index<store.size();
    }
};

