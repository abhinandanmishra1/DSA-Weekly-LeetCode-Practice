
class Solution {
public:
    // apply binary searchh while solving this problem 
    // just find the mid element and make it as root 
    // now for array less than mid call recursion to get root->left
    // same for array greater element and store in root->right
    
    TreeNode *sortedBst(vector<int> nums,int i,int j){
        if(i>j) return NULL;
        int mid=i+(j-i)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left=sortedBst(nums,i,mid-1);
        root->right=sortedBst(nums,mid+1,j);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedBst(nums,0,nums.size()-1);
    }
    
};