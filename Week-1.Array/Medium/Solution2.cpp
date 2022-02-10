/*
    Problem Name - [15. 3Sum]
    Read this blog - [https://www.code-recipe.com/post/three-sum]
*/
// My Solution
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        /*
           [-1,0,1,2,-1,-4]
           [-4,-1,-1,0,1,2]
           
        */
        vector<vector<int>> ans;
        int n=nums.size();
        if(n<3) return ans;
        int j=n-1;
        int k=1;
        for(int i=0;i<n-2;){
            j=n-1;
            k=i+1;
            while(k<j){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j--;
                    while(j>i and nums[j]==nums[j+1]){
                        j--;
                    }
                }else if(sum<0){
                    k++;
                }else{
                    j--;
                }
            }
            i++;
            while(i<n-2 and nums[i]==nums[i-1]) i++;
        }
        return ans;
        
    }
};