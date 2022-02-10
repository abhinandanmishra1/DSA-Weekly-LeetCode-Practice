/*
    Problem Name - [283. Move Zeroes]
    Read this blog - [https://afteracademy.com/blog/move-all-the-zeroes-to-the-end]
*/
// My Solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        while(i<n-1 and j<n){
            while(i<n and nums[i]!=0){
                i++;
            }
            j=i+1;
            
            while(j<n and nums[j]==0){
                j++;
            }
            if(j>=n){
                break;
            }
            swap(nums[i++],nums[j++]);
        }
        
    }
};